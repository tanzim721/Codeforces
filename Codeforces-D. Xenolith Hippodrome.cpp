#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
const int mod = (int)1e5+7;
int mx[mod];
int main()
{
    faster();
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n,m;
    cin>>n>>m;
    while(n){
        mx[n%m]++;
        if(mx[n%m]==2){
            cout<<"NO"<<endl;
            return 0;
        }
        n /= m;
    }
    cout<<"YES"<<endl;

    return 0;
}




