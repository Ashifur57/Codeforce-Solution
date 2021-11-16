#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,q,s;
    cin>>n;
    int p[n];
    for(i=0;i<n;i++){
    cin>>p[i];
    }
    cin>>q;
    int c[q];
    for(i=0;i<q;i++){
    cin>>c[i];
    }
    sort(p,p+n);
    for(i=0;i<q;i++){
        s=0;
        for(j=0;j<n;j++){
            if(p[j]<=c[i]){
             s++;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}

