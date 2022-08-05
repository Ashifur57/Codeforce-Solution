#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t,n;
	cin>>t;
	while(t--){
        cin>>n;
        for(int i=1;i<n;i++){
            cout<<i+1<<" ";
        }
        cout<<1<<"\n";
	}
	return 0;
}
