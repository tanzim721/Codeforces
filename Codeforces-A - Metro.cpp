#include<bits/stdc++.h>
using namespace std;


#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);


int main()
{
    faster();

    int n,x;
    cin>>n>>x;
    x--;
    vector<int> v;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    reverse(b,b+n);
    for(int i=0;i<n;i++){
        v.push_back(b[i]);
    }
    if(v[0]==0){
        cout<<"NO"<<endl;
        return 0;

    }
    if(v[a]){
        cout<<"YES"<<endl;
        return 0;
    }
    else{
        for(int i=x;i<v.size()-1;i++){
            if(v[i]==0){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;

    }

    return 0;
}

