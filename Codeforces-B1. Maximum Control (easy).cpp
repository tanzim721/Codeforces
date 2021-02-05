#include<bits/stdc++.h>
using namespace std;

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);


int main()
{
    faster();


    int t;
    cin>>t;
    unordered_map<int, int> m;
    for(int i=0;i<t-1;i++){
        int u,v;
        cin>>u>>v;
        if(m.find(u)!=m.end()){
            m[u]=m[u]+1;
        }
        else{
            m[u]=1;
        }
        if(m.find(v)!=m.end()){
            m[v]=m[v]+1;
        }
        else{
            m[v]=1;
        }
    }
    int cnt=0;
    for(auto a: m){
        if(a.second==1){
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}





