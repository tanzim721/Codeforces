#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        set<int > tan;
        for(int i=0;i<n;i++){
                cin>>a;
                tan.insert(a);
        }
        cout<<tan.size()<<endl;
    }
    return 0;
}
