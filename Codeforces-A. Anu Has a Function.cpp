#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int a[t+1];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    sort(a,a+t);
    reverse(a,a+t);
    for(int i=0;i<t;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
