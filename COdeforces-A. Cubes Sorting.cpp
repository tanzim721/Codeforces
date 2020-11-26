#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define ll long long

int main()
{
    faster();

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int cnt=0;
        for(int i=1;i<n;i++){
            if(ar[i-1]>ar[i]){
                //dbg(ar[i-1],ar[i]);
                cnt++;
            }

        }
        if(cnt == (n-1)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        //dbg(cnt);
    }

    return 0;
}
