#include<bits/stdc++.h>
using namespace std;
#define EPS 1e-9
int p,q,r,s,t,u;
double f(double x)
{
    return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}
double bisection()
{
    double low=0.0,hi=1.0;
    while(low + EPS < hi){
        double x = (low+hi)/2;
        if(f(low) * f(x) <= 0){
            hi = x;
        }
        else{
            low = x;
        }
    }
    return (low+hi)/2;
}
int main()
{

    while(scanf("%d%d%d%d%d%d",&p,&q,&r,&s,&t,&u)!=EOF){
            if(f(0)*f(1) >0){
                cout<<"No solution"<<endl;
            }
            else{
                printf("%.4lf\n",bisection());
            }
    }
    return 0;
}
