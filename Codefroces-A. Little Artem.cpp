#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string b_r(m,'B');
        vector<string > result(n,b_r);
        result[0][0] = 'W';
        for(int i=0;i<n;i++){
            cout<<result[i]<<endl;
        }
    }
    return 0;
}
