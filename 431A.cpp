#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b,c,d,i,res=0;
string s;
cin>>a>>b>>c>>d;
cin>>s;
for(i=0;s[i]!='\0';i++){
    if(s[i]=='1'){
        res+=a;
    }
    else if(s[i]=='2')
    {
        res+=b;
    }
    else if(s[i]=='3')
    {
        res+=c;
    }
    else if(s[i]=='4')
    {
        res+=d;
    }
}
cout<<res<<endl;
return 0;
}
