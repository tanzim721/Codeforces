#include<bits/stdc++.h>
using namespace std;
struct element{
    int value,index;
};
bool compare(element a, element b){
    return a.value < b.value;
}
int main()
{

    int n;
    cin>>n;
    element ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i].value;
        ar[i].index = i+1;
    }
    sort(ar,ar+n,compare);
    for(int i=0;i<n/2;i++){
        cout<<ar[i].index<<" "<<ar[n-i-1].index<<endl;
    }
    return 0;
}

