#include<bits/stdc++.h>
using namespace std;
typedef long long l;
typedef string s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    l t;
    cin>>t;
    while(t--){
        l n ,x=0;
        cin>>n;

        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
            x+=a[j];
        }
        if(x==n)
        {
            cout<<"0"<<endl;
        }
        else if(x>n){
            cout<<(x-n)<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
    return 0;
}

