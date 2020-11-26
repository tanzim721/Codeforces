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


    int t;
    cin>>t;
    while(t--){
        int n,c0,c1,h;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
        vi v;
        int ze=0,on=0;
        for(auto u : s){
            if(u=='0') ze++;
            else on++;
        }
        v.push_back(ze*c0 + on*c1);
        v.push_back(n*c0 + on*h);
        v.push_back(c1*n + ze*h);
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }


    return 0;
}





