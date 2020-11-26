#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    int r,g,b,w;
    while(t--){
        cin>>r>>g>>b>>w;
        if((r%2 + g%2 + b%2 + w%2<=1) || (r && g && b && ((r-1)%2 + (g-1)%2 + (b-1)%2 + (w+1)%2)<=1)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
