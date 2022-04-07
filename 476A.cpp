#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,m,x,res;
    cin>>n>>m;
    x= (n+1)/2;
    for(i=x;i<=n;i++){
        if(i%m==0){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
