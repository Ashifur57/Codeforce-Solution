#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,i,j;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        for(j=1;j<n-2;j+=2){
            cout<<j+1<<" "<<j<<" ";
        }
        if(n%2==0){
            cout<<n<<" "<<n-1<<endl;
        }
        else{
            cout<<n<<" "<<n-2<<" "<<n-1<<endl;
        }
    }
    return 0;
}
