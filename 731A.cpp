#include <bits/stdc++.h>
using namespace std;


int main() {
    string a;
    cin>>a;
    int res = 0, i, l;
    char c = 'a';
    l = a.length();
    for( i=0; i<l;i++){
        res+=min(abs(c-a[i]),26-abs(c-a[i]));
        c=a[i];
    }
    cout<<res<<endl;
    return 0;
}
