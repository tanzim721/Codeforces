#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

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
    int a[t];
    for(int i=0;i<t;i++) cin>>a[i];
    sort(a,a+t);
    int sum=0,cnt=0;
    for(int i=0;i<t;i++){

        if(sum <= a[i]){
            cnt++;
            sum += a[i];
        }
        //sum += a[i];
    }
    cout<<cnt<<endl;


    return 0;
}





