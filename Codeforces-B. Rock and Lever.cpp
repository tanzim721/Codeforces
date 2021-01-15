#include<bits/stdc++.h>
using namespace std;

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long int



int main()
{
    faster();

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ar[n];
        for(ll i=0;i<n;i++) cin>>ar[i];

        map<ll, ll> mp;
        for(ll i=0;i<n;i++){
            ll x = (log2(ar[i]));
            //dbg(ar[i]);
            //dbg(x);
            mp[x]++;
            //dbg(mp[x]);
        }
        ll ans=0;
        for(auto u : mp){
            ll c = u.second;
            ans += c*(c-1)/2;
        }
        cout<<ans<<endl;
    }

    return 0;
}

