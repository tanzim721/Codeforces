#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

typedef vector<int> vi;
typedef long long ll;

int main()
{
    faster();
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int mx;
        for(auto &u : v) cin>>u;
        mx = *max_element(v.begin(),v.end());
        int an=-1;
        for(int i=0;i<n;i++){
            if(v[i]==mx && ((i && v[i-1]<v[i]) || (i+1<n && v[i+1]<v[i]))) an=i+1;
        }
        cout<<an<<endl;
    }


    return 0;
}




