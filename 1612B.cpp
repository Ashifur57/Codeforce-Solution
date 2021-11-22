#include<bits/stdc++.h>
using  namespace  std;

void cal(){
    int i,j,k;
        cin>>i>>j>>k;
        int p=i/2;
        int q=p+1;
        if(j>q || k<p)cout<<"-1"<<endl;
        else if((j==q && k!=p) || (k==p && j!=q))
        {
            cout<<-1<<endl;
        }
        else{
            cout<<j<<" ";
            for(int t=q;t<=i;t++)
            {
                if(t==k || t==j){
                    continue;
                }
                cout<<t<<" ";
            }
            cout<<k<<" ";
            for(int r=1;r<=p;r++)
            {
                if(r==j || r==k){
                    continue;
                }
                cout<<r<<" ";
            }
            cout<<endl;
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
