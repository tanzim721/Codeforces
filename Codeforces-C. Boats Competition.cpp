#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;

    cin>>t;
    while(t--){
        ll cnt,n,ans=0;
        cin>>n;
        ll ar[n+1];
        for(int i=1;i<=n;i++) cin>>ar[i];
        sort(ar+1,ar+1+n);

        for(ll s=1;s<=2*n;s++){
            ll cnt=0;
            for(ll i=1,j=n;i<j;){
                if(ar[i]+ar[j] > s) j--;
                else if(ar[i]+ar[j] < s) i++;
                else{
                    cnt++;
                    i++,j--;
                }
            }
            ans = max(ans,cnt);
        }
        cout<<ans<<"\n";
    }

    return 0;
}
