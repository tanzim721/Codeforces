#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll p,f,cs,cw,s,w;
        cin>>p>>f;
        cin>>cs>>cw;
        cin>>s>>w;
        if(s>w){
            swap(cs,cw);
            swap(s,w);
        }
        ll s1,s2,w1,w2,ans=0;
        for(ll i=0;i<=cs;i++){
            s1 = min(i,p/s);
            s2 = min(cs-s1,f/s);
            w1 = min(cw,(p-s1*s)/w);
            w2 = min(cw-w1,(f-s2*s)/w);
            ans = max(ans,s1+s2+w1+w2);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
