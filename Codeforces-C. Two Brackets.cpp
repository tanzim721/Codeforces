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

    string s;
    int n;
    cin>>n;
    while(n--){
        cin>>s;
        int cnt1=0,cnt2=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt1++;
            }
            else if(s[i]=='['){
                cnt2++;
            }
            else if(s[i]==')'){
                if(cnt1>0) cnt1--,ans++;
            }
            else{
                if(cnt2>0) cnt2--,ans++;
            }
        }
        cout<<ans<<endl;
    }

	return 0;
}

