#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t,n,k,ans;
    cin>>t;
    int s,ct;
    while(t--){
        cin>>n>>k;
        if(k>n){
            ans = k-n;
            cout<<ans<<'\n';
        }
        else if(n%2==k%2){
            cout<<0<<'\n';
        }
        else{
            cout<<1<<'\n';
        }
    }
    return 0;
}



