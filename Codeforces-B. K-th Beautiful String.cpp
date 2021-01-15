#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,k;
    int pos,pos1;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int l=1;

        pos = n-2;
        while(k>l){
            k -= l;
            l++;
            pos--;
        }

        pos1 = n-k;
        for(int i=0;i<n;i++){
            if(pos==i || pos1==i){
                cout<<"b";
            }
            else{
                cout<<"a";
            }
        }
    }
    return 0;
}
