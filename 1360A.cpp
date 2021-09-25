#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,ans,i,x ,y;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b;
        x =a*2;
        y=b*2;
        if(x>y)
        {
            if(a>y)
                cout<<a*a<<endl;
            else
                cout<<y*y<<endl;
        }
        else
        {
            if(b>x)
                cout<<b*b<<endl;
            else
                cout<<x*x<<endl;
        }
    }
    return 0;
}
