
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m=0,draw=0,c=0;
    cin>>t;
    int i;
    for(i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            m++;
        }
        else if(b>a)
        {
            c++;
        }

    }
    if(m>c )
    {
        cout<<"Mishka";
    }
    if(c>m )
    {
        cout<<"Chris";
    }
   if (m==c)
    {
        cout<<"Friendship is magic!^^";
    }


    return 0;
}
