#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,x=2,y;
    cin >>t;
    while(t--)

    {
        cin>>c;
        y=c+1;
        vector<bool> per(y,false);
        cout <<x<<"\n";
        for (a=1;a<=c;a++)
        {
            if (per[a]==true){
                continue;
            }
            b=a;
            while(b<=c)
            {
                if (per[b]==false)
                {
                    cout <<b<<" ";
                    per[b]=true;
                }
                b=b*2;
            }
        }
        cout<<"\n";
    }
    return 0;
}
