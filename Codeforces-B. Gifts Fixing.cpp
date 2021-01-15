#include<bits/stdc++.h>
using namespace std;
int ar1[100],ar2[100];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t,n,cnt,sum1,sum2,ans,mx;
    cin>>t;
    while(t--){
        cin>>n;
        cnt=0,sum1=0,sum2=0,ans=0;
        for(int i=0;i<n;i++){
            cin>>ar1[i];
        }
        for(int i=0;i<n;i++){
            cin>>ar2[i];
        }
        for(int i=1;i<n;i++){
            if(ar1[i]==ar1[i-1] && ar2[i]==ar2[i-1]){
                cnt++;
            }
            else if(ar1[i]==ar1[i-1]){
                sum1 += abs(ar1[i]-ar1[i-1]);
            }
            else if(ar2[i]==ar2[i-1]){
                sum1 += abs(ar2[i]-ar2[i-1]);
            }
            else{
                ans += abs(ar1[i-1]-ar2[i-1]);
            }
        }
        int sum = sum1+sum2;
        if(cnt!=(n-1)){
            mx = max(sum,ans);
            cout<<mx<<endl;

        }
        else{
            cout<<0<<endl;
        }
    }

    return 0;
}
