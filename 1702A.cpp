#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,l,d,x;
    string m;
    cin>>t;

    while(t--){
        cin>>m;
        stringstream ob;
        l=m.length();
        l=l-1;
        d=pow(10,l);
        ob<<m;
        ob>>x;
        int res = d-x;
        if(res<0){
            res=(-1)*res;
        }
        cout<<res<<endl;
    }
    return 0;
}
