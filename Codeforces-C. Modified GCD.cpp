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


    int a,b;
    cin>>a>>b;
    int gcd = gcd(a,b);
    vi v;
    for(ll i=1;i*i<=gcd;i++){
        if(gcd%i==0){
            v.push_back(i);
            if(i*i!=gcd) v.push_back(gcd/i);
        }
    }
    int n;
    cin>>n;
    int x,y;
    while(n--){
        cin>>x>>y;
        int cnt=-1;
        for(auto u : v){
            if(u>=x && u<=y){
                cnt = max(cnt,u);
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}





