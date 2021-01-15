#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int > vec(n);

        int x;

        for(int i=0;i<n;i++){
            cin>>x;
            vec.push_back(x);
        }

        sort(vec.begin(),vec.end());

        int result = vec[n-1] - vec[0];

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                result = min(result,vec[j] - vec[i]);
                cout<<result<<" ";
            }
        }
        cout<<endl;
        cout<<result<<endl;

    }
    return 0;
}
