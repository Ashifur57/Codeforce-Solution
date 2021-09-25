#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    ll n,k,s;
    cin>>n>>k>>s;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    vector<ll> v;
    for(ll i=1;i<n;i++){
        if(arr[i]-arr[i-1]>s){
            v.push_back((arr[i]-arr[i-1]-1)/s);
        }
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    while(v.size()){
        if(v[v.size()-1]<=k){
            k-=v[v.size()-1];
            v.pop_back();
        }
        else
            break;
    }
    cout<<v.size()+1<<endl;
}

int main(){
    FAST1;
    FAST2;
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}
