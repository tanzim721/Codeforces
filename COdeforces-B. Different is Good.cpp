#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
int main()
{
    faster();
    int n;
    string s;
    cin>>n>>s;
    int cnt=0;
    map<char , int> mp;
    if(n>26){
        cout<<-1<<endl;
        return 0;
    }
    else{
        for(int i=0;i<n;i++){
            if(!mp[s[i]]){
                mp[s[i]] = 1;
            }
            else{
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
	return 0;
}

