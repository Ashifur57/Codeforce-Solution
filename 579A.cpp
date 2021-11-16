#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,c=0;
    cin>>x;

    while(x/2!=0)
    {
        if(x%2==1){
            c++;
        }
        x=x/2;
    }

    cout<<c+1;

    return 0;
}
