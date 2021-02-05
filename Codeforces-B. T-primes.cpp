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

const int mx = 1e5+7;
const int mx1 = 1e6+1;
ll a[mx];
int prim[mx1];

int main()
{
    faster();

    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    mem(prim,false);
    for(int i=2;i<mx1;i++){
        if(prim[i]) continue;
        for(int j=i+i;j<mx1;j+=i)
            prim[j] = true;
    }
    for(int i=0;i<n;i++){
        if(a[i]==1) cout << "NO" << endl;
        else{
            ll lo=0,h=mx1;
            while(lo < h){
                ll mid = (lo + h + 1) >> 1;
                if(mid*mid <= a[i] ) lo = mid;
                else h = mid - 1;
            }
            if((ll)lo*lo==a[i] && !prim[lo]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }

    return 0;
}





