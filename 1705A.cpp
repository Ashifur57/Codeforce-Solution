#include<bits/stdc++.h>
using namespace std;



int main()
{

    int t,i,j,n,q,p,c;
    cin>>t;
    while(t--)
    {
    cin>>n>>q;
    p=2*n;
    int a[p];

    for(i=0;i<p;i++)
    {
        cin>>a[i];
    }
    sort(a,a+p);
    j=0;
    c=0;
    while(j<n)
    {
        if(a[j+n]>=(a[j]+q))
        {
            c++;
        }
        j++;
    }
    if(c==n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    return 0;
}
