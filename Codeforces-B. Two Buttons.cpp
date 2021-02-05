#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    int ans=0;
    cin>>n>>m;
    while(m>n){
        if(m%2==1){
            m++;
            ans++;
        }
        else{
            m = m/2;
            ans++;
        }
    }
    ans = ans + (n-m);
    cout<<ans<<endl;

    return 0;
}
