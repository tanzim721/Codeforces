#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int x0,x1,x2,y0,y1,y2;
        cin>>x0>>x1>>x2>>y0>>y1>>y2;
        int a,b,c;
        a=min(x2,y1);
        c=min(x1,y0);
        b=min(x0,y2);
        y2=y2-b;
        x1=x1-c;
        if(x1==0)
            c=0;
        int ans = (2*a)-(min(x1,y2)*2);
        cout<<ans<<endl;
    }
    return 0;
}



