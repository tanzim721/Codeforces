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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        set<int> s;
        map < int, int> mp;
        for(int i=0;i<n;i++){
            cin>>a;
            s.insert(a);
            mp[a]++;
        }
        int mx=0;
        for(auto u : mp){
            mx = max(mx,u.second);
        }
        if(mp.size()==mx){
            cout<<mx-1<<endl;
        }
        else{
            cout<<(min((int)mp.size(),mx))<<endl;
        }
    }


    return 0;
}





