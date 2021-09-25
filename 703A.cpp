#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,m,c,mis=0,cris=0;
    cin>>n;
    for(i=0;i<n;i++){
         cin>>m>>c;
         if(m>c){
            mis++;
         }
         else if(m<c){
            cris++;
         }
    }
    if(mis>cris){
           cout<<"Mishka"<<endl;
         }
    else if(mis==cris ){
            cout<<"Friendship is magic!^^"<<endl;
         }
    else{
            cout<<"Chris"<<endl;
        }

    return 0;
}

