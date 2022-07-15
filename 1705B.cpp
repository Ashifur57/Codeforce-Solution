#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t,i,x,c,p;
    bool f;
    cin>>t;
    while(t--)
    {
    cin >> x;
    f = false;
    c=0;
    i=0;
    while(i<x)
    {
        cin >> p;
        if (i == x-1){
             break;
        }
        if (p != 0){
            f=true;
        }
        if (p == 0 && f){
            c++;
        }
        c += p;
        i++;
    }
    cout <<c<< endl;

    }
    return 0;
}
