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


int main()
{
    faster();


    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll m = n*k;
        ll a[m];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        ll s = (n+2)/2;
        ll f = (n*k)-s;
        ll sum=0;
        for(ll i=0;i<k;i++){
            sum += a[f];
            f -= s;
        }
        cout<<sum<<endl;
    }


    return 0;
}





