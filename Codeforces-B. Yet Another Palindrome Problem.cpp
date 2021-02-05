#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n+1],f=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-2;i++){
            for(int j=i+2;j<n;j++){
                if(a[i]==a[j]){
                    f=1;
                    break;
                }
            }
        }
        if(f==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
