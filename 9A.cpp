#include<bits/stdc++.h>
using namespace std;

int main(){
int y,w,z;
cin>>y>>w;
z = max(y,w);
if (z==0){
    cout<<" "<<endl;
}
else if(z==1){
    cout<<"1/1"<<endl;
}
else if(z==2){
    cout<<"5/6"<<endl;
}
else if(z==3){
    cout<<"2/3"<<endl;
}
else if(z==4){
    cout<<"1/2"<<endl;
}

else if(z==5){
    cout<<"1/3"<<endl;
}
else if(z==6){
    cout<<"1/6"<<endl;
}
return 0;
}
