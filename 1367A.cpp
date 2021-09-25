#include<bits/stdc++.h>
using namespace std;
#define maxn 110
char b[maxn],a[maxn];
void solve(){
	int n,i;
	scanf("%s",b+1);
	n=strlen(b+1);
	a[1]=b[1];
	for(i=2;i<=n-2;i+=2)a[i/2+1]=b[i];
	a[(n-2)/2+1+1]=b[n];
	a[(n-2)/2+1+1+1]='\0';
	printf("%s\n",a+1);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--)solve();
	return 0;
}
