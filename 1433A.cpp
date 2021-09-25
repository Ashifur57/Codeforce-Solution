#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int A=a;
        int digit=a%10;
        int cnt=0;
        while(a>0)
        {
            a/=10;
            cnt++;
        }
        switch(cnt){
        case 1:
            cout<<((digit*10)-10)+1<<endl;
            break;
        case 2:
            cout<<((digit*10)-10)+3<<endl;
            break;
        case 3:
            cout<<((digit*10)-10)+6<<endl;
            break;
        case 4:
            cout<<((digit*10)-10)+10<<endl;
            break;

        }
    }
}
