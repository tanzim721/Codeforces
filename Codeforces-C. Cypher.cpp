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
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        int a;
        string s;
        for(int i=0;i<n;i++){
            cin>>a;
            cin>>s;

            int cnt=0;
            for(int j=0;j<a;j++){
                if(s[j]=='U'){
                    cnt++;
                }
                else{
                    cnt--;
                }
            }
            //cout<<"CNT"<<cnt<<endl;
            int ans;
            ans = v[i]-cnt;
            //ans = abs(ans);
            if(ans>9){
                cout<<ans%10<<" ";
            }
            else if(ans<0){
                cout<<10+ans<<endl;
            }
            else{
                cout<<ans<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}





