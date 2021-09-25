#include <bits/stdc++.h>
using namespace std;

int main() {
int t,i,l,c,k;
cin >> t;
while(t--){
c=0,k=0;
cin>>l;
string s1,s2;
cin >> s1>>s2;
for(i=0;i<l;i++){
if (s1[i] == '1' && s1[i+1]=='0' && s2[i] == '1' && s2[i+1]=='0'){
    c += 2;
    i=i+2;
}
if (s1[i] == '0' && s1[i+1]=='1' && s2[i] == '0' && s2[i+1]=='1'){
    c += 2;
    i=i+2;
}
else if (s1[i] == '0' && s2[i] == '1') {
    c += 2;
}
else if (s1[i] == '1' && s2[i] == '0') {
    c += 2;
}
else if (s1[i] == '0' && s2[i] == '0') {
    c += 1;
}
else if (s1[i] == '1' && s2[i] == '1') {
    c += 0;
}

}
cout << c << endl;
}

return 0;
}

