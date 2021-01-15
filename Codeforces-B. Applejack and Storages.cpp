#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    ll x;
    cin>>n;

    ll cnt[100005], c[10];

    memset(cnt,0,sizeof(cnt));
    memset(c,0,sizeof(c));

    for(int i=1;i<=n;i++){
        cin>>x;
        cnt[x]++;
       // cout<<cnt[x]<<" ";
        if(cnt[x]==2 || cnt[x]==4 || cnt[x]==6 || cnt[x]==8)
            c[cnt[x]]++;
            //cout<<"->"<<c[cnt[x]]<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        ll x;
        char ch;
        cin>>ch>>x;
        if(ch=='+'){
            cnt[x]++;
            if(cnt[x]==2 || cnt[x]==4 || cnt[x]==6 || cnt[x]==8) c[cnt[x]]++;
        }
        else {
            if(cnt[x]==2 || cnt[x]==4 || cnt[x]==6 || cnt[x]==8) c[cnt[x]]--;
            cnt[x]--;
        }
        //cout<<x<<endl;
        //cout<<cnt[x]<<endl;
        //cout<<c[cnt[x]]<<endl;
        if(c[8] || c[4]>=2 || (c[6]&&c[2]>=2) || (c[4]&&c[2]>=3) )
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
