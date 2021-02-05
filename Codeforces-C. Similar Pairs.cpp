#include<bits/stdc++.h>
using namespace std;
void pairs()
{

    int n,a,b;
    cin>>n;
    vector<int> v(n);
    a=0;
    b=0;
    for(int &e: v){
        cin>>e;
        if(e%2==0){
            a++;
        }
        else{
            b++;
        }
    }
    if(a%2 != b%2){
        cout<<"NO"<<endl;
    }
    else{
        if(a%2==0){
            cout<<"YES"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(v[i]%2 == v[j]%2 || abs(v[i]-v[j])==1){
                        cout<<"YES"<<endl;
                        return;
                    }
                }
            }
            cout<<"NO"<<endl;
        }
    }
}
int main()
{

    int t;
    cin>>t;
    while(t--){
        pairs();
    }
    return 0;
}
