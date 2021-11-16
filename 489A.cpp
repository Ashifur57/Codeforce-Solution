#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,a,b,c,x,y,z,p,q,r;
    cin >> a >> b>> c;
    x=a+b*c;
    y=a*(b+c);
    z=a*b*c;
    p=(a+b)*c;
    q=a+b+c;
    r=a*b+c;
    int exp1=a+b+c;
	int exp2=a*b*c;
	int exp3=a+b*c;
	int exp4=a*b+c;
	int exp5=a*(b+c);
	int exp6=(a+b)*c;
	cout<<max(x,max(y,max(z,max(p,max(q,r)))));
    return 0;
}

