#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define ll long long int
int main()
{
    faster();
    int t;
    cin>>t;
    while(t--){
        int n,mx;
        cin>>n;
        int arr[n+1];
        int ans=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            ans *= arr[i];
        }
        sort(arr,arr+n);
        //ll mx = arr[n-2];
        mx = arr[n-2];
        if(n<=5){
            cout<<ans<<endl;
        }
        else{
            ans = ans/mx;
            if(ans<0 && mx<0){
                ans = abs(ans);
                cout<<ans<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }

    }
    return 0;
}
