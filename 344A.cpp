#include<iostream>
using namespace std;

int main(){
int n,h,i,c=0;
cin>>n;
int a[n];
for(i=0;i<n;i++){
cin>>a[i];
}
for(i=0;i<n;i++){
if(a[i]==a[i+1]){
continue;
}
else{
 c++;
}
}
cout<<c<<endl;
return 0;
}

