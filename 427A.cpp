#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,c=0,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
         cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>0)
            sum+=a[i];
        else if(sum>0)
            sum--;
        else
            c++;
    }
    cout<<c<<endl;

    return 0;
}
