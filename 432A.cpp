#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,i,c=0;
    cin>>n>>k;
    int s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
        s[i]+=k;
    }
    for(i=0;i<n;i++){
        if(s[i]<=5){
            c++;
        }
    }
    cout <<c/3;
    return 0;
}
