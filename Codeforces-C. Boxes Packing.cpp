#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
int main()
{
    faster();
    int t;
    cin>>t;
    int mx=0;
    map<int, int > mp;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        mp[n]++;
        mx = max(mx,mp[n]);
    }
    cout<<mx<<endl;

	return 0;
}






