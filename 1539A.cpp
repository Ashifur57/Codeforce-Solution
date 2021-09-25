#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main(){
    ll k;
    cin>>k;
    while(k--){
        ll n,x,t;
    cin>>n>>x>>t;
    ll val=min(n-1,t/x);
    if(val==0){
        cout<<0<<endl;
        break;
    }
    ll sum=max(0ll,val*(val-1)/2)+val*(n-val);
    cout<<sum<<endl;
    }
}
