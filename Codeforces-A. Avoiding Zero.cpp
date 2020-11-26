#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define ll long long int

const int mod = (int)1e9+7;


int main()
{
    faster();

    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        vector<int> x,y,z;
        int n;
        int sum1=0,sum2=0,sum3=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0){
                sum1+=a[i];
                x.push_back(a[i]);
            }
            if(a[i]<0){
                sum2 += a[i];
                y.push_back(a[i]);
            }
            if(a[i]==0){
                z.push_back(a[i]);
            }
        }

        if(abs(sum2)==sum1){
            cout<<"NO"<<endl;
        }
        else{
                cout<<"YES"<<endl;
                if(abs(sum1) > abs(sum2)){
                    for(int i=0;i<x.size();i++) cout<<x[i]<<" ";

                    for(int i=0;i<y.size();i++) cout<<y[i]<<" ";

                    for(int i=0;i<z.size();i++) cout<<z[i]<<" ";
                }
                else{
                    for(int i=0;i<y.size();i++) cout<<y[i]<<" ";

                    for(int i=0;i<x.size();i++) cout<<x[i]<<" ";

                    for(int i=0;i<z.size();i++) cout<<z[i]<<" ";
                }
            cout<<endl;
        }

    }

    return 0;
}



