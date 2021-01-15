#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,k,ans;
    cin>>t;
    while(t--){
        cin>>n>>k;

        ans = n-(n%k);
        ans += min(n%k,k/2);
        cout<<ans<<endl;

    }
    return 0;
}
