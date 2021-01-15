#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    long int sum=0,sum1;
    cin>>n;
    int arr[n+10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            sum = sum + arr[i];
            cout<<sum<<" ";
        }

        else{
            sum1=sum;
            sum1 = sum1 + arr[i];
            cout<<sum1<<" ";

        }
    }

    return 0;

}
