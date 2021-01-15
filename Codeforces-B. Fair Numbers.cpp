#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

typedef vector<int> vi;
typedef long long ll;
typedef long double ld;
typedef double D;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<string> vs;
typedef vector<vi> vvi;
const int mod = (int)1e7+7;

bool solve(ll n)
{
    ll m=n;
    while(m){
        int rem = m%10;
        m = m/10;
        if(rem==0) continue;
        if(n%rem) return 1;
    }
    return 0;
}
int main()
{
    faster();

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        while(solve(n)) n++;
        cout<<n<<endl;

    }

    return 0;
}





