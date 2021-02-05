#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);


int main()
{
    faster();

    int t;
    cin>>t;
    while(t--){
        int a1,a2,b1,b2,mx1,mx2,mn1,mn2,n;
        float f;
        cin>>a1>>b1;
        cin>>a2>>b2;
        mx1 = max(a1,b1);
        mn1 = min(a1,b1);
        mx2 = max(a2,b2);
        mn2 = min(a2,b2);
        n = (a1*b1)+(a2*b2);
        f = sqrt(n);

        if(n==f*f && (mx1==mx2) && (mn1+mn2==mx2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

