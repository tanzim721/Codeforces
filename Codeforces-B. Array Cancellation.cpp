#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n+1];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll sum=0;
        ll mx = 1e12;
        for(ll i=0;i<n;i++){
            sum += arr[i];
            //cout<<sum<<" ";
            mx = min(mx,sum);
            //cout<<mx<<" ";
        }
        cout<<-mx<<endl;
    }
    return 0;
}
