#include<bits/stdc++.h>
using namespace std;

int main(){
int t,n,i,j,sum;
cin>>t;

for(i=0;i<t;i++){
    sum=0;
    cin>>n;
    string s,a;
    cin>>s;
    a=s;
    sort(s.begin(), s.end());
    for(j=0;j<n;j++){
        if (a[j] != s[j]){
            sum++;
        }
    }
    cout<<sum<<endl;
}

return 0;
}
