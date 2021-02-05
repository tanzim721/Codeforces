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

const int sz = 1000001;
int ans[sz];
int main()
{
    faster();

    string s;
    cin>>s;

    int cnt=0;
    int lef=0,mx=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') lef++;
        else{
            if(lef>0) cnt++,lef--;
            else{
                cnt=0;
            }
            mx = max(mx,cnt);
            ans[cnt]++;
        }
    }
    ans[0]=1;
    cout<<2*mx<<" "<<ans[mx]<<endl;

    return 0;
}





