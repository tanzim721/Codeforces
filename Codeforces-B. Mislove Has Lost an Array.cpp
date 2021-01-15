#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

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


    int n,l,r;
    cin>>n>>l>>r;
    int mx=0,mi=0;
    for(int i=1;i<=l;i++){
        mi += i;
    }
    for(int i=1;i<=r;i++){
        mx += i;
    }
    mi = mi + (n-l);
    mx = mx + (n-r)*r;
    cout<<mi<<" "<<mx<<endl;

    return 0;
}





