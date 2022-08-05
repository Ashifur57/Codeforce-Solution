#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    fio;
	ll t,n,res;
	cin>>t;
	while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        res =0;
        for(int i=1;i<n;i++){
            res ^= a[i];
        }
        cout<<res<<"\n";
	}

	return 0;
}




