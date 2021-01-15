#include<bits/stdc++.h>
using namespace std;
int main()
{

    int  t,n,ans;
    cin>>t;
    while(t--){
        cin>>n;
        ans = n/2;
        int sum=0,sum1=0;
        if(ans%2 != 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2){
                    cout<<i<<" ";
                    sum += i;
            }
            for(int i=1;i<n-1;i+=2){
                cout<<i<<" ";
                sum1 += i;
            }
            cout<<sum - sum1<<endl;
        }
    }
    return 0;
}
