#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,a,b,pt=0;
        cin>>n;  cin>>a;  cin>>b;
        if(a>=b && a>0 && b>0)
        {
            for(lli i=2;i<=sqrt(n);i++)
            {
                if(n%i==0 && i%2==0)
                {
                    pt=pt+a;
                    n=n/i;
                    i=1;
                }
                else if(n%(n/i)==0 && (n/i)%2==0)
                {
                    pt=pt+a;
                    n=n/(n/i);
                    i=1;
                }
            }

            for(lli i=2;i<=sqrt(n);i++)
            {
                if(n%i==0 && i%2!=0)
                {
                    pt=pt+b;
                    n=n/i;
                    i=1;
                }
                else if(n%(n/i)==0 && (n/i)%2!=0)
                {
                    pt=pt+b;
                    n=n/(n/i);
                    i=1;

            }
        }
        }
        else if(b>a && a>0 && b>0)
        {
            for(lli i=1;i<=sqrt(n);i++)
            {
                if(n%i==0 && i%2!=0 && i!=1)
                {
                    pt=pt+b;
                    n=n/i;
                    i=1;
                }
                else if(n%(n/i)==0 && (n/i)%2!=0 && n/(n/i)!=1)
                {
                    pt=pt+b;
                    n=n/(n/i);
                    i=1;
                    //cout<<"5";
                }
            }
            for(lli i=1;i<=sqrt(n);i++)
            {
                if(n%i==0 && i%2==0 && i!=1)
                {
                    pt=pt+a;
                    n=n/i;
                    i=1;
                }
                else if(n%(n/i)==0 && (n/i)%2==0 && n/(n/i)!=1)
                {
                    pt=pt+a;
                    n=n/(n/i);
                    i=1;
                }
            }
        }
        else if(a>b && b<0)
        {
            for(lli i=2;i<(n);i++)
            {
                if(n%i==0 && i%2==0)
                {
                    pt=pt+a;
                    n=n/i;
                    i=1;
                }
                else if(n%(n/i)==0 && (n/i)%2==0)
                {
                    pt=pt+a;
                    n=n/i;
                    i=1;
                }
            }
            if(pt==0)
            {
                pt=b;
            }
        }
        else if(b>a && a<0)
        {
            for(lli i=2;i<(n);i++)
            {
                if(n%i==0 && i%2!=0)
                {
                    pt=pt+b;
                    n=n/i;
                    i=1;
                }
                 else if(n%(n/i)==0 && (n/i)%2!=0)
                {
                    pt=pt+b;
                    n=n/i;
                    i=1;
                }
            }
            if(pt==0)
            {
                pt=a;
            }

        }
        cout<<pt<<endl;
    }

    return 0;
}

