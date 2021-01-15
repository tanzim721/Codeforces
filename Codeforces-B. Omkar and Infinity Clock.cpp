#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<int> vec(n);
        int ma;
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        for(ll j=1;j<=k;j++){
            ma = *max_element(vec.begin(),vec.end());
            for(int i=0;i<n;i++){
                vec[i] = ma - vec[i];
            }
            if(j%2==k%2){
                break;
            }
        }
        for(int i=0;i<n;i++){
            cout<<vec[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


