#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        bool ch[n+1];
        memset(ch,0,sizeof(ch));
        ll ans[n+1];
        for(int i=1,j=1;i<=2*n;i++){
            ll a;
            cin>>a;
            if(!ch[a]){
                ans[j]=a;
                j++;
                ch[a]=1;
            }
        }
        for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }

    return 0;
}
