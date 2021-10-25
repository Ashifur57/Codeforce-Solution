#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,i,a,b;
    cin>>t;
    int s[4];
    while(t--){
        for(i=0;i<4;i++){
            cin>>s[i];
        }

        if(s[0]>s[1]){
            a=s[0];
        }
        else{
            a=s[1];
        }

         if(s[2]>s[3]){
            b=s[2];
        }
        else{
            b=s[3];
        }
        sort(s,s+4);
        if((a==s[2] || a==s[3]) && (b==s[2] || b==s[3])){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
