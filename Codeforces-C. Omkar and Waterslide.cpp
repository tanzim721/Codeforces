#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        //vector<int> vec;
        int n;
        ll mx=0;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
            //vec.push_back(a);
        }
        //sort(a,a+n);
        for(int i=0;i<n-1;i++){
            mx += max(0,a[i]-a[i+1]);
        }
        cout<<mx<<"\n";
    }

    return 0;
}


