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
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll b[n];
        b[0] = a[0];
        for(ll i=1;i<n;i++){
            if(a[i]%a[i-1]==0 || a[i-1]%a[i]==0){
                b[i] = a[i];
            }
            else{

                if(a[i]>a[i-1]){
                    b[i] = a[i] - a[i]%a[i-1];
                    a[i] = b[i];
                }
                else{
                    b[i] = a[i-1] - a[i-1]%a[i];
                    a[i] = b[i];
                }
            }
        }
        for(ll i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}





