#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int i,j,x,c;
    ll t;
    cin>>t;
    for(x=0;x<t;x++){
    ll n;
    cin>>n;
    ll a[n];
    ll b[2*n+1];
    for(i=0;i<=2*n;i++)
        b[i]=1e6;
    for(i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]=i+1;
    }
    c=0;
    for(i=3;i<2*n;i++){
        for(j=1;j<=sqrt(i);j++){
            if(i%j==0 && i!=j*j){
                if(b[j]+b[i/j]==i){
                    c++;
                }
            }
        }
    }
    cout<<c<<endl;

    }
    return 0;
}

