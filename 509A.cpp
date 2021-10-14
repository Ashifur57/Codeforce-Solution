#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, i, j, arr[10][10];
    cin >> a;
    for (i = 0; i < a; i++) {
        for (j = 0; j < a; j++) {
            if (i == 0) {
                arr[i][j] = 1;
            } 
            else if (j == 0) {
                arr[i][j] = 1;
            } 
            else {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
        }
    }
    cout << arr[a - 1][a - 1]<<endl;
}
