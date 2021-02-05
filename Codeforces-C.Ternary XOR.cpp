#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);


    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        string a="1", b = "1" ;
        int f=0;
        for(int i=1;i<n;i++){
            char c = s[i];
            if(c == '2'){
                    if(f){
                        a.push_back('0');
                        b.push_back('2');
                    }
                    else{
                        a.push_back('1');
                        b.push_back('1');
                    }

            }
            else if(c=='1'){
                    if(!f){
                        a.push_back('1');
                        b.push_back('0');
                    }
                    else{
                        a.push_back('0');
                        b.push_back('1');
                    }
                    f = 1;
            }
            else{
                a.push_back('0');
                b.push_back('0');
            }
        }
        cout<< a << '\n' << b << '\n' ;

    }
    return 0;
}
