#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, a,b,i,mx,mn;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b;
       if(a==b)
        cout<<"0"<<endl;
       else{
           if(abs(a-b)%10==0)
           cout<<abs(a-b)/10<<endl;
           else
           cout<<(abs(a-b)/10)+1<<endl;
       }
    }
}
