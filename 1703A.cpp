#include<bits/stdc++.h>
using namespace std;

int main(){
int i,t;
string st;
cin>>t;
while(t--){
   cin>>st;
   for (i = 0; i < st.length(); i++)
  	{
  		st[i] = tolower(st[i]);
  	}
  	if(st=="yes"){
        cout<<"YES"<<endl;
  	}
  	else{
        cout<<"NO"<<endl;
  	}
}
return 0;
}
