#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    fio;
	int t,n,i;
	cin>>t;
	while(t--){
        cin>>n;
        if(n==1){
            cout<<2<<endl;
        }
        else if(n==2 || n==3){
           cout<<1<<endl;
        }
        else{
            if(n%3==0){
                cout<<n/3<<endl;
            }
            else{
                cout<<(n/3)+1<<endl;
            }
        }

    }
	return 0;
}

