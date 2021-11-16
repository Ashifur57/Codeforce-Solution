#include<bits/stdc++.h>
using namespace std;

int main(){
int t,n,i,j,z,a,b;
cin>>t;
while(t--){
    cin>>n;
      z=1;
    while(z<=n){
        a=n;
        b=n;
        while(a>0){
            i=0;
           while(i<z && a>0){
                cout<<"(";
                a--;
                i++;
            }
            cout<<")";
                b--;
        }
        j=0;
         while(j<b){
            cout<<")";
            j++;
        }
        z++;
        printf("\n");
    }

}
return 0;
}
