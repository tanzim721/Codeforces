#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define ll long long int



int main()
{
    faster();

    int t;
    cin>>t;
    while(t--){
        int n,k,mx=0;
        cin>>n>>k;
        int a[n];
        int sum ;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=1;i<n;i++){
            sum = (k-a[i])/a[0];
            mx += sum;
        }
        cout<<mx<<endl;
    }

    return 0;
}
