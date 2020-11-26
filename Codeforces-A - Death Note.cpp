#include<bits/stdc++.h>
using namespace std;

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    faster();

    int n,m;
    cin>>n>>m;
    int a;
    int ans;
    int rem=0;
    for(int i=0;i<n;i++){
        cin>>a;
        a += rem;
        ans = a/m;
        cout<<ans<<" ";
        rem = a%m;

    }

    return 0;
}


