#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,l,s1,s2,x;

    s1=0;
    s2=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    l =n-1;
    x=1;
    for(i=0;x<n+1;i++){
        if(arr[i]>arr[l]){
            if(x%2!=0){
               s1+=arr[i];
            }
            else{
                s2+=arr[i];
            }
            x++;
        }
        else{
            if(x%2!=0){
               s1+=arr[l];
               l--;
               i--;
            }
            else{
               s2+=arr[l];
               l--;
               i--;
            }
            x++;
        }
    }
    cout<<s1<<" "<<s2<<endl;


    return 0;
}
