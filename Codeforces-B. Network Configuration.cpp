#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define ll long long int

const int mod = (int)1e7+7;




int main()
{
    faster();


    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());
    cout<<v[m-1]<<endl;

    return 0;
}





