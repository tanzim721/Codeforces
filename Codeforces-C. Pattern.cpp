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

const int mx =1234567;
char ans[mx],a[mx];

int main()
{
    faster();

    int n;
    cin>>n;
    int len;
    mem(ans,'*');
    for(int i=0;i<n;i++){
        cin>>a;
        len = strlen(a);
        for(int j=0; a[j] ;j++)
        if(a[j]!='?'){
            if(ans[j]=='*') ans[j]=a[j];
            else if(ans[j]!=a[j]) ans[j]='?';
        }
    }
    for(int i=0;i<len;i++){
        if(ans[i]=='*') cout<<"a";
        else cout<<ans[i];
    }
    cout<<endl;

    return 0;
}





