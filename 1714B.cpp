#include <bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int t,n,i,res;

void solve(){
        cin >> n;
        vector<int> s(n);
        for (i=0;i<n;i++){
            cin >> s[i];
        }
        set<int> x;

        reverse(s.begin(), s.end());
        res = 0;
        for (i = 0; i < n; i++)
        {
            if (x.find(s[i]) == x.end()){
                x.insert(s[i]);
            }
            else{
                break;
            }

            res++;
        }
        int ans=n - res;
        cout << ans << '\n';
        }


int main()
{

    fio;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
