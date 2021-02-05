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


    int n,m;
    cin>>n>>m;
    int a[m];
    a[0]=1;
    for(int i=1;i<=m;i++) cin>>a[i];
    ll sum=0;
    for(int i=1;i<=m;i++){
        if(a[i] >= a[i-1]) sum += a[i]-a[i-1];
        else sum += a[i]-a[i-1]+n;
    }
    cout<<sum<<endl;


    return 0;
}





