#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){

        int ar[3],n,sum;
        cin>>ar[0]>>ar[1]>>ar[2]>>n;
        sort(ar,ar+3);
        sum = 2*ar[2] - ar[1] - ar[0];
        if(n<sum || (n-sum)%3!=0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}
