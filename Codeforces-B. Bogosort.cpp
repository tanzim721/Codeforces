#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    int t;
    ll n;
    cin>>t;

    while(t--){
        cin>>n;
        vector< ll > vc(n+1);

        for(ll i=0;i<n;i++){
            cin>>vc[i];
            vc.push_back(n);
        }
        sort(vc.begin(),vc.end()+1);

        for(ll i=n;i>0;i--){
            cout<<vc[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
