#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int ar1[100],ar2[100];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t,n,a,b;
    cin>>t;
    while(t--){
        cin>>n;
        ll sum = 0;
        a = INT_MAX, b = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>ar1[i];
            a = min(a,ar1[i]);
        }

        for(int i=0;i<n;i++){
            cin>>ar2[i];
            b = min(b,ar2[i]);
        }

        for(int i=0;i<n;i++){
            sum += max((ar1[i]-a),(ar2[i]-b));
        }
        cout<<sum<<endl;
    }

    return 0;
}
