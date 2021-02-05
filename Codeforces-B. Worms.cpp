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

const int mod = (int)1e5+7;
int a[mod];
int R[mod],L[mod];

int main()
{
    faster();

    int n,last=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        L[i] = last+1;
        R[i] = last + a[i];
        last = R[i];
    }
    int m;
    cin>>m;
    while(m--){
        int q;
        cin>>q;
        int l=1,r=n;
        while(l<=r){
            int mid = (l+r)>>1;
            if(q>=L[mid] && q<=R[mid]){
                cout<<mid<<endl;
                break;
            }
            if(q>R[mid]) l = mid+1;
            else r = mid-1;
        }
    }
    return 0;
}




