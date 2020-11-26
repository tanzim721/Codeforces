#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,a,b,ans;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a<b){
            if(a%2==b%2){
                ans=2;
            }
            else{
                ans=1;
            }
        }
        else if(a==b){
            ans=0;
        }
        else{
            if(a%2==b%2){
                ans=1;
            }
            else{
                ans=2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
