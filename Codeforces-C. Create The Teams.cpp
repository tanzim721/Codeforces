#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,x,z;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int arr[n+1],r,c;
        r=0;
        c=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);

        for(int i=n;i>=1;i--){
            if(c*i >= x)
                r++;
                c = 0;
            c++;
        }
        cout<<c<<endl;
    }

    return 0;
}
