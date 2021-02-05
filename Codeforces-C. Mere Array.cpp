#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int ar[n+1],br[n+1];
        for( i=0;i<n;i++){
            cin>>ar[i];
            br[i] = ar[i];
        }

        sort(br,br+n);
            for( i=0;i<n;i++){
                if(ar[i]==br[i]) continue;
                if(ar[i]%br[0]) break;
            }
            if(i<n){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }


    }
    return 0;
}



