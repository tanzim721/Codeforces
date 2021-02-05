#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,t;

    cin>>t;
    while(t--){
        cin>>n;
        long long ans=0;
        for(int i=1;i<=n/2;i++){
            ans += (long long)i*i;
        }
        cout<<ans*8<<endl;
    }
    return 0;
}
