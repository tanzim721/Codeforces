#include<bits/stdc++.h>
using namespace std;
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
typedef long long ll;
typedef vector<ll> vi;
const int mod = (int)1e7+7;
int main()
{
    faster();
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);


    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vi v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<ll, ll> mp;
        ll cnt=0;
        for(int i=0;i<n;i++){
            cnt += mp[-i+v[i]]++;
            //dbg(cnt);
            //dbg(mp[-i+v[i]]);
        }
        cout<<cnt<<endl;
    }

    return 0;
}




