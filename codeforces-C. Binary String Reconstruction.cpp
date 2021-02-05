#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    read:
    while(t--){
        string s;
        cin>>s;
        ll x;
        cin>>x;
        string w(s.size(),'0');
        for(ll i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(i-x>=0 && (i-2*x<0 || s[i-2*x]=='1')) w[i-x]='1';
                else if(i+x<s.size() && (i+2*x>=s.size() || s[i+2*x]=='1')) w[i+x]='1';
                else{
                    cout<<-1<<'\n';
                    //break;
                    goto read;
                }
            }
        }
        cout<<w<<'\n';
    }
    return 0;
}



