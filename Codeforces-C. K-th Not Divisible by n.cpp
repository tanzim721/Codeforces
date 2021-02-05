#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,k,n;
    cin>>t;
    while(t--){
            int cnt;
        cin>>k>>n;
        cnt = (n-1)/(k-1);
        cout<<cnt+n<<endl;
    }
    return 0;
}
