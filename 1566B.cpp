#include <bits/stdc++.h>
using namespace std;

int main() {
int t,i,l,c,k;
cin >> t;
while(t--){
c=0,k=0;
string s;
cin >> s;
l = s.size();
for(i=0;i<l;i++){
if (s[i] == '0'){
    c = 1;
}
else if (s[i] != '0' and c == 1) {
    k++;
    c = 0;
}
}
if (s[l-1] == '0'){
        k++;
}
cout << min(k, 2) << endl;
}

return 0;
}
