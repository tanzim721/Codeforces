#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0){
            n = n/2;
            cout<<n-1<<endl;
        }
        else{
            n = n/2;
            cout<<n<<endl;
        }
    }
    return 0;
}
