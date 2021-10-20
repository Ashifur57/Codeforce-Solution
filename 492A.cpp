#include<bits/stdc++.h>
using namespace std;

int main(){
int n,i,j=0,c=0,sum=0;
cin>>n;
for(i=1;i<=n;i++){
    j+=i;
    if(j>n){
        break;
    }
    n=n-j;
    c++;
}
cout<<c<<endl;

return 0;
}
