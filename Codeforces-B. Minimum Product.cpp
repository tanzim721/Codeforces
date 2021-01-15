#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solved(ll a,ll b,ll x,ll y,ll n)
{
    ll rem = n-(a-x);
    if(n>a-x){
        if(rem>b-y)
            return x*y;
        else
            return x*(b-rem);
    }
    else{
        return (a-n)*b;
    }

}
int main()
{
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        //ll ans = min(solved(a,b,x,y,n),solved(a,b,x,y,n));
        cout<<min(solved(a,b,x,y,n),solved(b,a,y,x,n))<<endl;
    }
    return 0;
}
