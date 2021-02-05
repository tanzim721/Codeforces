#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
int main()
{
    faster();
    int n;
    cin>>n;
    map<string , int> mp;
    while(n--){

        string s;
        cin>>s;
        if(mp[s] >=1 ) cout<<s<<mp[s]<<endl;
        else cout<<"OK"<<endl;

        mp[s]++;
    }
	return 0;
}


