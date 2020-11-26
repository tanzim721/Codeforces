#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n+1];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        if(ar[0]+ar[1]>ar[n-1]){
            cout<<-1<<"\n";
        }

        else{
            cout<<1<<" "<<2<<" "<<n<<"\n";
        }

    }

    return 0;
}

