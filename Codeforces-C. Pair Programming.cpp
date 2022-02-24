#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

typedef vector<int> vi;
typedef long long ll;
const int mod = (int)1e7+7;
int main()
{
    faster();
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        int k, n, m;
        cin>>k>>n>>m;
        int a[n], b[m];
        vi v;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        int x=0,y=0;
        bool ok=true;
        while(x!=n || y!=m){
            if(x!=n && a[x]==0){
                v.push_back(0);
                k++;
                x++;
            }
            else if(y!=m && b[y]==0){
                v.push_back(0);
                k++;
                y++;
            }
            else if(x!=n && a[x]<=k){
                v.push_back(a[x++]);
            }
            else if(y!=m && b[y]<=k){
                v.push_back(b[y++]);
            }
            else{
                ok=false;
                cout<<-1<<endl;
                break;
            }

        }
        if(ok){
            for(auto u:v) cout<<u<<" ";
            cout<<endl;
        }
    }


    return 0;
}





