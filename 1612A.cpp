#include<bits/stdc++.h>
using  namespace  std;
int cal(){
        int y,z;
        cin>>y>>z;
        if(y%2==0 && z%2==0)
        {
            cout<<y/2<<" "<<z/2<<endl;
        }
        else if(y%2==1 && z%2==1)
        {
            cout<<y/2<<" "<<z/2 + 1<<endl;
        }
        else
        {
            cout<<-1<<" "<<-1<<endl;
        }
}
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        cal();
    }
    return 0;
}
