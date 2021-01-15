#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,cnt1,cnt2;
    cin>>t;
    while(t--){
        cin>>n;
        cnt1=0;
        cnt2=0;
        while(n%2==0){
            n/=2;
            cnt1++;
        }
        while(n%3==0){
            n/=3;
            cnt2++;
        }
        if(n==1 &&  cnt1<=cnt2){
            cout<<(2*cnt2)-cnt1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
