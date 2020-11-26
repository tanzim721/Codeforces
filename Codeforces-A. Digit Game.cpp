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
        string a;
        cin>>a;
        int cnt1=0,cnt2=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='0'){
                continue;
            }
            else if(a[i]%2!=0){
                cnt1++;
            }
            else{
                cnt2++;
            }
        }
        if(cnt1>=cnt2){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
	return 0;
}




