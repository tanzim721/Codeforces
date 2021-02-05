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

int solve()
{
    map<int, int> m,mp;
    int n;
    cin>>n;
    int a;
    for(int i=1;i<=n;i++){
        cin>>a;
        m[a]++;
        mp[a]=i;
    }
    for(auto u : m){
        if(u.second==1){
            cout<<mp[u.first]<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
int main()
{
    faster();


    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}





