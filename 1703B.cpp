#include<bits/stdc++.h>
using namespace std;

int main(){
int res,t,n;
string st;
cin>>t;
while(t--){
   cin>>n;
   cin>>st;
    sort(st.begin(), st.end());
    int u = unique(st.begin(), st.end()) - st.begin();
    res=(u*2)+(n-u);
    cout<<res<<endl;
}
return 0;
}

