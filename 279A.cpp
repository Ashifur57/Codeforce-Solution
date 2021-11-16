#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a,b,c,res=0;
    cin >> a >> b;
    c = (a/b);
    if(c >=b){
        res = c/b;
    }
    cout << res+a+c << endl;
    return 0;
}

