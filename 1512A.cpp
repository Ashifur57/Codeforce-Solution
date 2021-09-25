#include<bits/stdc++.h>
using namespace std;

int main(){
int t,n,i,res;
cin>>t;
while(t--){
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
if(a[0]==a[i]){
    continue;
}
else{
    res=i;
}
}

cout<<res<<endl;
return 0;
}

