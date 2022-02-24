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

int main()
{
    faster();
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    string s;
    cin>>s;
    for(int i=2;i<s.size();i++){
        int a = (s[i-2]) - 'A';
        int b = (s[i-1]) - 'A';
        int as = (a+b)%26;
        if( as != (s[i] - 'A') ){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}





