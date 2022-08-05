#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    fio;
	ll t,n,m,i,c;
	cin>>t;
	while(t--){
        c=0;
        cin>>n>>m;
        vector<int> a,b(m);
        for(i=0;i<m;i++){
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        for(i=0;i<m;i++){
            if(i>0){
                a.push_back(b[i]-b[i-1]-1);
            }
        }
        a.push_back(n-b.back+b[0]-1);
        sort(a.begin(),__greater());
        ll t=0;
         no=0;
        for(i=0;i<a.size();i++){
            if(r[i]-time==1){
                no+=1;
            }
            else{
                no+=max(0LL,r[i]-1-t);
                t+=4;
            }
        }

        cout<<n-no<<"\n";

	}
	return 0;
}



