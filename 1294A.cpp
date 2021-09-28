#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, num, t;
    cin >> t;
 
    while (t--) {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2] >> n;
        sort(arr, arr + 3);
        int dif = arr[2] - arr[0];
        dif += arr[2] - arr[1];
 
        if(n >= dif) {
            n -= dif;
            if(n % 3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
}
