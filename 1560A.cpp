#include<iostream>
using namespace std;

int main()
{
    int t,i,j,a,x;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a;
    for(j=1;j<=a;j++){
        x=j%10;
        if(j%3==0 || x==3){
            a++;
        }
    }
    cout<<a<<endl;
    }


    return 0;
}

