#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,t,p,i,j;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        for(j=2;j<10000;j++){
            p = pow(2,j)-1;
            if(n%p==0){
                cout<<n/p<<endl;
                break;
            }
        }
    }

return 0;
}

