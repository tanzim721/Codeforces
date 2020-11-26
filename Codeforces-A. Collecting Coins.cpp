#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,t,arr[3];
    cin>>t;
    while(t--){
        cin>>arr[0]>>arr[1]>>arr[2]>>n;
        sort(arr,arr+3);
        int a;
        a = 2*arr[2] - arr[1] - arr[0];
        if(n<a || (n-a)%3!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
