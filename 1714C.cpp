#include <bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int t,x,y;

void solve(){
        cin >> x;

        string s;
        y = 9;

        while (x)
        {
            while (x < y)
                y--;
            s += char('0' + y);
            x -= y;
            y--;
        }
        reverse(s.begin(), s.end());
        cout << s << '\n';
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
