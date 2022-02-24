#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

typedef vector<int> vi;
typedef long long ll;
const int mod = (int)1e7+7;

void solve()
{
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    if( *max_element(v.begin()+1, v.end()-1)==1 || (v[1]%2=1 && n==3)){
        cout<<"-1"<<endl;
        return;
    }
    else{
        ll ans=0;
        for(int i=1;i<n-1;i++){
            ans += (v[i]+1)/2;
        }
        cout<<ans<<endl;
    }
}
int main()
{
    faster();
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}





