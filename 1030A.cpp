#include<iostream>
using namespace std;

int main(){
int n,i,c=0;
cin>>n;
int a[n];
for(i=0;i<n;i++){
cin>>a[i];
}
for(i=0;i<n;i++){
if(a[i]==0){
  c++;
}
else{
continue;
}
}
if(c==n){
  cout<<"EASY"<<endl;
}
else{
  cout<<"HARD"<<endl;
}

return 0;
}


