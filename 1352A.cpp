#include<bits/stdc++.h>
using namespace std;

int main(){
int t,n,x,i,j,c,o[5];
cin>>t;
for(i=0;i<t;i++){
    c=0;
    cin>>n;
    if(n%10==0){
            c=1;
        cout<<c<<endl;
        cout<<n<<endl;
    }
    else{
    for(j=0;j<5;j++){

    if(n>=10000){
     x=n%10000;
     o[c]=n-x;
     n=x;
     c++;
    }
    else if(n>=1000){
     x=n%1000;
     o[c]=n-x;
     n=x;
     c++;
    }
    else if(n>=100){
     x=n%100;
     o[c]=n-x;
     n=x;
     c++;
    }
    else if(n>=10){
     x=n%10;
     o[c]=n-x;
     n=x;
     c++;
    }
    else{
        c++;
        break;
    }
 }
 cout<<c<<endl;
 for(j=0;j<c-1;j++){
    cout<<o[j]<<" ";
 }
 cout<<n<<endl;
}
}
return 0;
}
