#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m,i,sum;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int a[n];
        sum=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sum-=m;
        if(sum<0){
            cout<<0<<"\n";
        }
        else{
            cout<<sum<<"\n";
        }
    }
    return 0;
}
