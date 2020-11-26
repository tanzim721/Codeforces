#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,ans,cnt=0;
        cin>>n>>m;
        int ar[n],ar2[m];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int j=0;j<m;j++){
            cin>>ar2[j];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ar[i]==ar2[j]){
                    ans = ar[i];
                    cnt++;
                }
            }
        }
        if(cnt>=1){
            cout<<"YES\n";
            cout<<1<<" "<<ans<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
