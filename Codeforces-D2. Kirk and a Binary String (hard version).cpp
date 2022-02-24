#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

typedef vector<int> vi;
typedef long long ll;
stack<int> cnt;
int main()
{
    faster();
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    string s;
    cin>>s;

    for(int i=0;i<signed(s.size());i++){
        if(s[i]=='1') cnt.push(i);
        else if(!cnt.empty()) cnt.pop();
    }
    while(!cnt.empty()){
        s[cnt.top()] = '0';
        cnt.pop();
    }
    cout<<s<<endl;

    return 0;
}





