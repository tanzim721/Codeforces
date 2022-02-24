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
const int mod = (int)1e9;

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
        vi v1(n), v2(n);
        for(int i=0;i<n;i++) cin>>v1[i];
        for(int i=0;i<n;i++) cin>>v2[i];

        vi first(n+1), second(n+1);
        for(int i=0;i<n;i++){
            first[i+1] = first[i] + v2[i];
        }
        for(int i=n-1;i>=0;i--){
            second[i] = second[i+1] + v1[i];
        }
        int ans = mod;
        for(int i=0;i<n;i++){
            ans = min(ans, max(first[i], second[i+1]) );
            //cout<<first[i] << " "<<second[i+1]<<endl;
        }
        cout<<ans<<endl;

    }
    return 0;
}

/*
3
3
1 3 7
3 5 1
3
1 3 9
3 5 1
1
4
7

*/


