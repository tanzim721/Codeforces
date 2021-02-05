#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define ll long long
int main()
{
    faster();

    string s,s1;
    ll a,b,cnt=0;
    cin>>s>>s1;
    a = s.size();
    b = s1.size();
    for(ll i=0;i<a;i++){
        if(s.substr(i,b) == s1.substr(0,b)){
            cnt++;
            i = i + b - 1;
        }
    }
    cout<<cnt<<endl;

	return 0;
}

