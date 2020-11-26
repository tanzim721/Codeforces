#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,even,odd,sum;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        odd=0;
        even=0;
        sum=0;
        for(int j=0;j<n;j++){
                cin>>a[j];
                if(a[j]%2==0){
                    even++;
                }
                else{
                    odd++;
                }
                sum = sum+a[j];
        }
        if(sum%2 != 0){
            cout<<"YES"<<endl;
        }
        else{
            if(even !=0 && odd !=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
