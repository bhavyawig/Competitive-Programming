#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long t,n,i,q,a,j=1;
    cin>>t;
         j:
        cin>>n;
        for(i=0;i<=n;i++)
        {
            a=pow(2,i);
            if(a<=n)
            {
                q=a;
            }
            else if(a>n)
            {
                cout<<q-1<<endl;
                if(j<=t-1)
                {
                      j++;
                    goto j;
                }
                else
                {
                      exit(0);
                }
            }
     }
    return 0;
}
