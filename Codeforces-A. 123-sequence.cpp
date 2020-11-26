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

    int n;
    cin>>n;
    int a,cnt1=0,cnt2=0,cnt3=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==1){
            cnt1++;
        }
        else if(a==2){
            cnt2++;
        }
        else{
            cnt3++;
        }
    }
    cout<<n-(max(max(cnt1,cnt2),cnt3))<<endl;

    return 0;
}
