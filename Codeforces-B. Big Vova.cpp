#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define ll long long int
int mx = INT_MIN;
int GCD(int x, int y)
{
    return y ? GCD(y,x%y) : x;
}
bool compare(const pair<int, int>&i, const pair<int, int>&j)
{
    return i.first > j.first;
}
int main()
{
    faster();
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector< pair <int, int> >  vec;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mx = max(mx,arr[i]);
        }
        int v[n];
        for(int i=0;i<n;i++){
            if(mx==arr[i]){
                continue;
            }
            else{
                v[i] = GCD(mx,arr[i]);
                vec.push_back({v[i],arr[i]});
            }
        }
        sort(vec.begin(),vec.end(),compare);
        cout<<mx<<" ";
        for(int i=0;i<n-1;i++){
            cout<<vec[i].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}
