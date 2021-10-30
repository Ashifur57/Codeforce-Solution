#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;
 
ll power(ll a, ll b){ // a raised to power b
  ll res=1;
  while(b){
    if(b&1) res=(res*a)%mod;
    b>>=1;
    a=(a*a)%mod;
  }
  return res;
}
 
bool isprime(ll n){
  for(ll i=2;i*i<=n;i++){
   if(n%i==0) return 0;
  }
  return 1;
}
 
void solve()
{
   ll n,k;cin>>n>>k;
   ll sum=1,curr=1;
   ll ans=0;
   while(sum<n && curr<k){
       ans++;
       sum+=curr; 
       curr+=curr; //1-> 2 -> 4
   }
   if(sum<n){
       ll rem=n-sum;
       ans+=(rem+k-1)/k; //ans+=ceil(rem/k)
   }
   cout<<ans<<endl;
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  int t=1;cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}
