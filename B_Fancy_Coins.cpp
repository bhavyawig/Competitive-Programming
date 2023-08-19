#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t; 
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli m,k,a1,ak;
        cin>>m>>k>>a1>>ak;
        lli mehnge=m/k;
        lli ans=0;
        if(ak>=mehnge)
        {
            lli cost=mehnge*k;
            m=m-cost;
        }
        else
        {
            lli cost1=ak*k;
            m=m-cost1;
        }
      //  cout<<m;
        if(m==0) cout<<"0"<<endl;
        else
        {
            if(a1>=m)
            {
                m=0;
            }
            else
            {
                if(m-a1==0 || m-a1%k==0 || a1==0)
                m=m-a1;
                else
                {
                    lli val=m-k;
                    if(a1>=val)
                    m=m-val;
                    
                }
                if(m==0) cout<<"0"<<endl;
                else
                {
                    int an=m/k;

                }
            }

        }

    }
    return 0;
}