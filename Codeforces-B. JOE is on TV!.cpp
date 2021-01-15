/*   Tanzimul Islam
   Dept. of ICE in PUST
/*************/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    int t;
    float ans=0;
    cin>>t;
    for(int i=1;i<=t;i++){
        ans += 1/(float)i;
    }
    printf("%0.12f\n",ans);

    return 0;
}
