#include<bits/stdc++.h>
using  namespace  std;

int main()
{
    int t,n,x,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int odd=0,even=0;
        n*=2;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x%2==0){
                even++;
            }
            else{
             odd++;
            }
        }
        if(odd==even){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        } 
    }
    return 0;
}
