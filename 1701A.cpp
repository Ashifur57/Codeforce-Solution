#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,t,a[2][2],c;
    cin>>t;
    while(t--){
        c=0;
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cin>>a[i][j];
                if(a[i][j]==1){
                    c++;
                }
            }
        }
    if(c==0){
        cout<<0<<endl;
    }
    else if(c==1){
        cout<<1<<endl;
    }
    else{
        cout<<c/2<<endl;
    }
    }

    return 0;
}
