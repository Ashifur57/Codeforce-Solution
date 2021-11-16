#include<bits/stdc++.h>
using namespace std;

int main(){
int n,i,c=1,m=0;
cin>>n;
int a[n];
for(i=0;i<n;i++){
cin>>a[i];
}
for(i=0;i<n-1;i++){
if(a[i]<=a[i+1]){
  c++;
}
else{
    if(c>m){
        m=c;
    }
    c=1;
}
}
if(c>m){
  m=c;
}

cout<<m<<endl;

return 0;
}



