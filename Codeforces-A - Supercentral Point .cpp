#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define ll long long int
#define endl '\n'



int main()
{
    faster();

    int t;
    cin>>t;
    set<pair<int,int> > s;
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        s.insert({x,y});
    }
    if(t%2) cout<<1<<endl;
    else cout<<2<<endl;

    return 0;
}







