#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,r,re,i;
 while(cin>>n)
 {
     if(n%2==0)
     {
         re=n/2;
         printf("%d\n",re);
         for(i=1;i<=re;i++)
         {

            printf("2 ");
         }
     }
     else
     {
         r=(n-3);
         re=(r/2);
         printf("%d\n",re+1);
         for(i=1;i<=re;i++)
         {
           printf("2 ");
         }
         cout<<"3";
     }
     cout<<endl;
 }


}
