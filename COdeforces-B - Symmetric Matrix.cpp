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
        int n,m,a[100],b[100];
        cin>>n>>m;
        n = 2*n;
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        if(m%2!=0){
            cout<<"NO"<<endl;
        }

        else{
            if(a[n-1]==b[0] && a[0]==b[n-1]){
                cout<<"YES"<<endl;
            }
            else if(a[n-1]==b[0] || a[0]==b[n-1]){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        //dbg(a[n-1]);
        //dbg(b[0]);
    }

    return 0;
}

