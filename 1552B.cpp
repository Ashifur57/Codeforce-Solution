#include <iostream>
using namespace std;

int main() {
    int x,t;
    cin>>t;
    for(x=0;x<t;x++){
   int a[10][10], transpose[10][10], row, column=5, i, j;

   cout << "Enter rows and columns of matrix: ";
   cin >> row ;

   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cin >> a[i][j];
      }
   }
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
        if(a[i][j] > a[j][i]){
            s=j
        }
      }
   }



   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j) {
         transpose[j][i] = a[i][j];
      }

   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }
    }
   return 0;
}
