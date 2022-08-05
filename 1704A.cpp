#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    fio;
	ll t,n,m,i,j,x,c;
	cin>>t;
	while(t--){
        c=0;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        x=n-m;
        vector<int> s(2,0);
        for(i=0;i<x;i++){
            s[a[i]-'0']=1;
        }
        if(a[x]!=b[0] && s[b[0]-'0']==0){
            c++;
        }
        for(i=x+1,j=1;i<n;i++,j++){
            if(a[i]!=b[j]){
               c++;
            }
        }
        if(c==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

	}
	return 0;
}

