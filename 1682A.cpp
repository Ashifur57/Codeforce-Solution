#include<bits/stdc++.h>
using namespace std;

int main()
{

int t; 
cin >> t;
while(t--) {
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;++i){cin>>a[i];}
vector<int>b=a;
sort(b.begin(),b.end());
 int res=-1;
 for(int i=0;i<n;++i)
 {
     if(a[i]!=b[i])
     {
         res&=a[i];
     }
 }
 return res;
}
return 0;
}
