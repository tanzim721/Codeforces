#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t,cnt;
    cin>>t;
    while(t--){
        ll a,n,b;
        cin>>a>>b>>n;
        cnt=0;
        while(a<=n && b<=n){
            if(a<b)
                a += b;
            else
                b += a;
            cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
