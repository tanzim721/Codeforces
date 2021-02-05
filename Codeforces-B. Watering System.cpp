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

    int n,a,b,s;
    cin>>n>>a>>b;
    vi v;
    cin>>s;
    int sum=s;
    int su=(s*a)/b;
    int m = n-1;
    for(int i=0;i<m;i++){
        cin>>s;
        v.push_back(s);
        sum += s;
    }
    sort(v.begin(),v.end());
    sort(v.rbegin(), v.rend());
    if(su >= sum) {
        cout<<0<<endl;
        return 0;
    }
    int cnt=0;
    for(int i=0;i<m;i++){
        sum = sum - v[i];
        cnt++;
        if(sum <= su) break;
    }
    cout<<cnt<<endl;

    return 0;
}





