#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,t,k,i,j,x,c;
    cin>>t;
    for(x=0;x<t;x++){
        cin>>n>>k;
        c=n-1;
        int a[n],b[n],sum=0;
        for(j=0;j<n;j++){
           cin>>a[j];
        }
        for(j=0;j<n;j++){
           cin>>b[j];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(j=0;j<k;j++){
           if(a[j]>=b[c]){
              break;
           }
           else{
              a[j]=b[c];
              c--;
           }
        }
        for(i=0;i<n;i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }


return 0;
}


