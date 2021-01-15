#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,x,ans;
    cin>>t;

    while(t--){
           // int cnt=0;
            long long int sum=0;
            ans=0;
        cin>>n>>x;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        sort(a,a+n);
        reverse(a,a+n);
        for(int i=0;i<n;i++){
            sum += a[i];
            if(sum >= (long long)(i+1)*x )
                ans = i+1;
        }
        cout<<ans<<endl;

    }
    return 0;
}
