#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
int main()
{
    faster();

    int n,m;
    cin>>n>>m;
    map<string, string > ipname;
    for(int i=0;i<n;i++){
        string name,ip;
        cin>>name>>ip;
        ipname[ip] = name;
    }
    for(int i=0;i<m;i++){
        string name1,ip1;
        cin>>name1>>ip1;

        ip1.pop_back();
        cout<<name1<<" "<<ip1<<"; #"<<ipname[ip1]<<endl;
    }

	return 0;
}



