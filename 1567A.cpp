#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,i,j;
    string s, res;
    cin >> t;
    for (i = 1; i <= t; i++) {
        res="";
        cin >> n;
        cin >> s;
        for (j = 0; j < n; j++) {
            if (s[j] == 'U') {
                    res += 'D';
            }
            else if (s[j] == 'D') {
                res += 'U';
            }
            else {
                res += "LR";
                j++;
            }
    }
    cout<<res<<endl;
}
return 0;
}
