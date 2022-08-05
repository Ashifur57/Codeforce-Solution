#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
    fio;
    ll t,n,m,i,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ans=(m*(m+1))/2;
        for(i=2;i<=n;i++)
        {
            ans+=(i-1)*m+m;
        }
        cout<<ans<<endl;
    }
}
