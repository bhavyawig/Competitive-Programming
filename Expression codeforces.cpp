
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,max;
    cin>>a;
    cin>>b;
    cin>>c;
    int p[6];
    p[0]=a*b*c;
    p[1]=(a+b)*c;
    p[2]=a*(b+c);
    p[3]=a+b+c;
    p[4]=(a*b)+c;
    p[5]=a+(b*c);
     max=p[0];
    for(int i=0;i<=5;i++)
    {
        if(max<p[i])
        {
            max=p[i];
        }
    }
    cout<<max;

    return 0;
}
