#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
typedef vector<int> vi;
const int mod = (int)1e7+7;
void solve()
{

}
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
        vi ans(n*n);
        if(n==1){
            cout<<1<<endl;
        }
        else if(n==2){
            cout<<-1<<endl;
        }
        else{
            int a=1;
            for(int i=0;i<n*n;i+=2){
                ans[i]=a++;
            }
            for(int i=1;i<n*n;i+=2){
                ans[i]=a++;
            }
            for(int i=0;i<n*n;i++){
                cout<<ans[i]<<" ";
                if((i+1)%n==0){
                    cout<<endl;
                }
            }
        }
    }


    return 0;
}






