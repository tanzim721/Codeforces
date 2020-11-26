#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,n,c,ans;

    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a%b==0){
            ans = a%b;
        }
        else{
            c = a%b;
            ans = b-c;
        }
        cout<<ans<<endl;
    }
    return 0;
}
