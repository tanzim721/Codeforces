#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
int main()
{
    faster();

    string s,s1;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] == '.'){
            s1 += '0';
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            s1 += '1';
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            s1 += '2';
            i++;
        }
    }
    cout<<s1<<endl;

	return 0;
}


