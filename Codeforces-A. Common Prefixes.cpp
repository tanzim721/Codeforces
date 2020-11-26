#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solved()
{

    int n;
    cin>>n;
    string s(200,'a');
    cout<<s<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s[x] = s[x] == 'a' ? 'b':'a';
        cout<<s<<endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solved();
    }
    return 0;
}
