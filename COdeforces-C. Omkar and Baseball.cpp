#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll t;
    cin>>t;
    read:
    while(t--){
        ll n;
        cin>>n;
        ll ar[n+1],l=1,r=n;
        for(ll i=1;i<=n;i++){
            cin>>ar[i];
        }
        while(r>=1 && ar[r]==r) r--;
        while(l<=n && ar[l]==l) l++;

        if(l>=r){
            cout<<0<<endl;
            goto read;
        }
        for(ll i=1;i<=r;i++){
            if(ar[i]==i){
                cout<<2<<endl;
                goto read;
            }
        }
        cout<<1<<endl;
    }

    return 0;
}
