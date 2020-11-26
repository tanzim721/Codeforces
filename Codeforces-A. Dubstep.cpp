#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f=1;
    string s;
    string c = "";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
                i+=2;
                if(!f){
                    cout<<" ";
                }
                continue;

        }
        else{
            f = 0;
            cout<<s[i];
        }
    }
    return 0;

}
