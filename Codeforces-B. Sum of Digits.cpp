#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,rem,cnt;
    cin>>n;
    cnt=0;

    while(n!=1){
        rem = n%10;
        n = n/10;
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;

}
