#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))
#define endl '\n'

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define ll long long int


int main()
{
    faster();

    int n,m;
    cin>>n>>m;
    int a;
    vector<ll> v;
    vector<ll>:: iterator it;
    v.push_back(0);
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(v.back() + a);
    }
    int ans=0;
    for(it=v.begin(); it!=v.end(); it++){
        int x = upper_bound(it, v.end(), m+ *it)-it-1;
        ans = max(ans,x);
    }
    cout<<ans<<endl;

    return 0;
}
