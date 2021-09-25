#include<bits/stdc++.h>
using namespace std;

int main(){
int i,a,b,c,t;

cin>>t;
for(i=0;i<t;i++){
    cin>>a>>b;
    if(b<a){
        c=a;
        a=b;
        b=c;
    }
    if((b-a)%2!=0){
        cout<<-1<<endl;
    }
    else{
        if(b==0 && a==0){

               cout<<0<<endl;
        }
        else if(b==0 || (b-a) == 0){
               cout<<1<<endl;
           }
        else{

               cout<<2<<endl;
           }
    }
}



return 0;
}
