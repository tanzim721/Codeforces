#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n;
        p = (n+3)/4;
        for(int i=1;i<=n-p;i++){
            cout<<9;
        }
        for(int i=1;i<=p;i++){
            cout<<8;
        }
        cout<<endl;
    }

    return 0;
}
