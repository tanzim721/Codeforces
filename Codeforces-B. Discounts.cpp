#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define ll long long int


const int MX=200002;
int re[MX];

int main()
{

    int n,m;
    cin>>n;
    int a[n];
    ll sum =0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    sort(a,a+n);
    mem(re,-1);
    int q;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>q;
        if(re[i]==-1){
            re[q] = sum - a[n-q];
        }
        cout<<re[q]<<endl;
    }

    return 0;
}
