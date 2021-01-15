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

    unsigned long long int n,m;
    ll k;
    cin>>n>>k;
    unsigned long long int rem = 1000000000000000000;
    unsigned long long int ans;
    unsigned long long int nb;
    for(ll i=0;i<k;i++){
        cin>>m;
        if(rem > (n%m)){
            rem = (n%m);
            ans = i+1;
            nb = (n/m);
        }
    }
    cout<<ans<<" "<<nb<<endl;

    return 0;
}





