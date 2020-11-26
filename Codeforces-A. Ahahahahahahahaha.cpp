#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int cnt0=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(!arr[i]){

                cnt0++;
            }
        }
        int cnt1=n-cnt0;
        if(cnt0>=n/2){
            cout<<cnt0<<endl;
            for(int i=0;i<cnt0;i++){
                cout<<0<<" ";
            }
        }
        else{
            if(cnt1%2==1)
                cnt1--;
            cout<<cnt1<<endl;
            for(int i=0;i<cnt1;i++){
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
