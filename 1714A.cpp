#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int t,i,x, y, z,a, b,res,c1,c2,p;
void solve(){
    cin >> x >> y >> z;
    c1 = y * 60 + z,
    res = 1e9;
    for (i = 0; i < x; i++)
    {
        cin >> a >> b;
        c2 = a * 60 + b;
        if (c2 < c1)
        {
            p = (24 * 60) - (c1 - c2);
        }
        else
        {
            p = c2 - c1;
        }
        res = min(res, p);
    }
        cout << res / 60 << " " << res % 60 << "\n";
}
int main(){
    fio;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}


