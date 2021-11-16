#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,c=0;
    cin>>n;
    int s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s, s + n);
    for(i=0;i<n;i++){
       c+=(s[n-1]-s[i]);
    }
    cout<<c;
    return 0;
}

