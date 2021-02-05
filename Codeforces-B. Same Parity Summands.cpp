#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int x;
        x = (n-k+1);
        if(x>0 && (x%2==1)){
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++){
                cout<<"1"<<" ";
            }
            cout<<x<<endl;
            continue;
        }
        int y;
        y = n-2*(k-1);
        if(y>0 && (y%2==0)){
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++){
                cout<<"2"<<" ";
            }
            cout<<y<<endl;
            continue;
        }
        cout<<"NO"<<endl;

    }
    return 0;
}
