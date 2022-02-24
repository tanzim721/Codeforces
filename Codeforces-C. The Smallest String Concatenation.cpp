#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

typedef vector<int> vi;
typedef long long ll;
const int mod = (int)1e7+7;
string s[100000];
bool cmp(const string& a, const string& b){
    return (a+b)<(b+a);
}
int main()
{
    faster();
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s[i];
    }
    sort(s, s+t, cmp);
    for(int i=0;i<t;i++){
        cout<<s[i];
    }
    cout<<endl;

    return 0;
}





