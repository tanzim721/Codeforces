#include<bits/stdc++.h>
using namespace std;

int main()
{

        long long int n,l,maxi=0;
        cin>>n>>l;
        long long int a[n+1];
        double x,y,z,ans;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i] > maxi){
                maxi = a[i+1]-a[i];
            }
        }
        x = maxi/2.0;
        y = a[0]-0.0;
        z = (double)l - a[n-1];
        ans = max(y,z);
        ans = max(ans,x);

        printf("%0.10f",ans);

        return 0;

}
