#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,h,m,r;
    cin>>t;
    while(t--)
    {
    r=0;
    cin>>h>>m;
    r=(23-h)*60+(60-m);
    cout<<r<<endl;
    }
    return 0;
}
