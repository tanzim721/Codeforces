#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,sum;
    cin>>n;
    sum=1;
    int b;
    for(int i=0;i<n;i++){
        cin>>b;

        if(b%2==0){
            cout<<b/2<<endl;
        }
        else{
            cout<<(b+sum)/2<<endl;
            sum *= -1;
        }
    }
    return 0;
}
