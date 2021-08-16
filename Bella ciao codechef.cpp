#include<bits/stdc++.h>
using namespace std;
int main()
{
    int D,d,p,q;
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int sum=0,count=0;
    cin>>D;cin>>d;cin>>p;cin>>q;
    while(D>0 && count!=1)
    {
        sum=sum+(d*p);
        p=p+q;
        D=D-d;
        if(D<d && D>0)
        {
            sum=sum+(D*p);
            count++;
        }
    }
     cout<<sum<<endl;
    }
    return 0;
}
