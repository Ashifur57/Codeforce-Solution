#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a,b;
cin>>t;
while(t--){
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
    }
    else{
        if(a<b && (b-a)%2==0){
            cout<<2<<endl;
        }
        else if(a<b && (b-a)){
            cout<<1<<endl;
        }
        else if(a>b && (a-b)%2==0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}
return 0;
}
