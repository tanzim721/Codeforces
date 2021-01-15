#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define ll long long

int main()
{
    faster();

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        int on=0,tw=0,sum=0;
        for(int i=0;i<n;i++){
            cin>>a;
            sum += a;
            if(a==1){
                on++;
            }
            else{
                tw++;
            }
        }
        bool b=false;
        if( sum%2==0 && on%2==0 && (tw%2==0 || on>0) ) b=true;

        if(b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
