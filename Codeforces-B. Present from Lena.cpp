#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,t;
    cin>>n;
    for(int i = 0; i <= n; i++){
        for(int s = n; s >= i; s--)
            cout << "  ";
        for(int j=0; j<=i; j++)
            cout << j<<" ";
        for(int j=1;j<=i;j++){

            cout<<j<<" ";
        }
        cout<<endl;

    }
    return 0;
}
