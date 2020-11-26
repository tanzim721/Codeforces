#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    int t;
    ll n;
    cin>>t;
    while(t--){
            ll a=4;
            cin>>n;
            for(ll i=0;i<100000;i++){
                if(n%(a-1)==0){
                cout<<n/(a-1);
                break;
            }
            else
                a *= 2;
            }
            cout<<endl;
    }
    return 0;

}
