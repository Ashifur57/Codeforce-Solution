#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
ll cons= 1000000000000000;
int main()
{
    ll t,n,x,i,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            ll p=1;
            map<ll,ll>mp;
            while(1){
                p*=2LL;
                mp[p]=1;
                if(p>=cons) break;
            }
            if(mp[n]){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
            
        }
            
    }
 
    return 0;
}
