#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,x,y,d,ans;
        cin>>n>>x>>y;
        int g;
        g = y-x;
        d = y-x;
        for(int i=1;i<=g;i++){
            if(g%i) continue;
            if(y-(n-1)*i<=x){
                d=i;
                if(y-(n-1)*i>0){
                    ans = y-(n-1)*i;
                }
                else{
                    ans = y-(y/i)*i;
                    if(ans==0) ans = ans +i;
                }
                break;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans<<" ";
            ans += d;
        }
        cout<<endl;
    }
    return 0;
}
