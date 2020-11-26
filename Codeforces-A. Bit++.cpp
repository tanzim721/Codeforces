#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,sum=0;
    cin>>n;

    char ch[n+5];
    while(n--){
        cin>>ch;

        if(ch[1] == '+'){
            sum++;
        }
        else{
            sum--;
        }
    }
    cout<<sum<<endl;

    return 0;
}
