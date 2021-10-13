#include<bits/stdc++.h>
using namespace std;
int c;
void divide(int w,int h){
    if(w%2 == 0){
        c *= 2;
        w = int(w/2);
        divide(w,h);
    }
    else if(h%2 == 0){
        c *= 2;
        h = int(h/2);
        divide(w,h);
    }
}
int main(){
int t,w,h,n;
cin>>t;
 while(t--){
    c = 1;
    cin>>w>>h>>n;
    divide(w,h);
    if(c<n){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
 }
 return 0;
}
