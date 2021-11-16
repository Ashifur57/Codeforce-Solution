#include<iostream>
using namespace std;

int main(){
int n,h,i,c=0;
cin>>n>>h;
int a[n];
for(i=0;i<n;i++){
cin>>a[i];
}
for(i=0;i<n;i++){
if(a[i]>h){
c=c+2;
}
else{
 c++;
}
}
cout<<c<<endl;
return 0;
}
