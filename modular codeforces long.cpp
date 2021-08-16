#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int i,t,n,m,count=0,p,q,j,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        p=n;
        q=m;
        for(j=1;j<=p;j++)
        {
            for(k=1;k<=p;k++)
            {
                if(b>a)
          {

                if(((q%j)%k)==((q%k)%j))
                {
                    count++;
                }
          }

            }
        }
        cout<<count;
    }

    return 0;
}

