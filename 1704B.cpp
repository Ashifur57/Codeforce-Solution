#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    fio;
	int t,n,m,i,c,a,b,avg,d;
	cin>>t;
	while(t--){
        c=0;
        cin>>n>>m;
        vector<int> s(n);
        for(i=0;i<n;i++){
            cin>>s[i];
        }
        a=s[0];
        b=s[0];
        for(i=1;i<n;i++){
            a=min(a,s[i]);
            b=max(b,s[i]);
            avg=(a+b)/2;
            d=abs(avg-a);
            d=max(d,abs(avg-b));
            if(d>m){
                a=s[i];
                b=s[i];
                c++;
            }
        }

        cout<<c<<"\n";

	}
	return 0;
}


