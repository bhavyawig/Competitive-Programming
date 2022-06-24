#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       lli a[n];
       for(lli i=0;i<n;i++)
        cin>>a[i];
        lli cnt=0;
        for(lli i=1;i<n;i++)
        {
            if(a[i-1]>=a[i])
            {
                while(a[i-1]>=a[i])
                {
                    a[i-1]=a[i-1]/2;
                    cnt++;
                }
            }
        }
        lli x=0;
        for(lli i=1;i<n;i++)
        {
            if(a[i-1]>=a[i])
                x++;
        }
        if(x==0)
        cout<<cnt<<endl;
        else
            cout<<-1<<endl;
   }

    return 0;
}

