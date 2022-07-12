#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,i,j,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
            x=b[i];
            char st[x];
            for(j=0;j<x;j++){
                cin>>st[i];
                if(st[i]=='U'){
                    a[i]=a[i]-1;
                }
                else{
                    a[i]=a[i]+1;
                }
            }
        }
        for(i=0;i<n;i++){
            if(a[i]<0){
                    if(a[i]%10==0){
                        cout<<0<<" ";
                    }
                    else{
                        cout<<10+(a[i]%10)<<" ";
                    }

            }
            else{
                cout<<a[i]%10<<" ";
            }

        }
        cout<<endl;

    }
    return 0;
}


