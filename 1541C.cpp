#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,t=1,i,v,s;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        v=0;
        s=0;

        for(i=2;i<n;i++){
            s+=a[i-2];
            v-=(a[i]*(i-1));
            v+=s;
        }
        cout<<v<<endl;
    }
    return 0;
}

