#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli n,c;
        cin>>n>>c;
        lli nn=0,sum=0;
       // cout<<c<<endl;
        for(lli i=0;i<n;i++)
        {
            lli a;
            cin>>a;
            sum+=a;
            c-=(a*a);           
        }
    //  cout<<c<<endl;
        lli b1=4*sum;
        lli c1=c;
        //c1=c1*(-1);
        lli a1=4*n;
        lli kyu=(b1)/(a1);
        lli kyuu=(kyu*kyu)/4;
        lli kyu2=c1/a1;
        lli val=sqrt(kyuu+kyu2);
      //  cout<<val<<endl;
        lli ff=val-(kyu/2);
      //  lli y=2*a1;
        //lli ans=ff/y;
        cout<<ff<<endl;
    }
    return 0;

}