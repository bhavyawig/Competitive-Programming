#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli x,y;
    cin>>x;   cin>>y;
    lli cntx=0,cnty=0,count=0,p=0,z=0,j;
    lli a[n],b[n],cpya[n],cpyb[n];
    for(lli i=0;i<n;i++)
    {
        cin>>a[i];   cin>>b[i];
    }
    for(lli i=0;i<n;i++)
    {
        if(a[i]>=x && b[i]>=y)
        {
            cout<<"1";
            exit(0);
        }
    }
    if(a>=b)
    {
        for(lli i=0;i<n;i++)
        {
             cpya[i]=a[i];
        }
        lli q=sizeof(cpya)/sizeof(cpya[0]);
        sort(cpya,cpya+q);
        for(lli i=0;i<n;i++)
        {
            cntx=cntx+cpya[i];
            for( j=0;j<n;j++)
            {
                if(cpya[i]==a[j])
                {
                    p=j;
                    a[j]=-1;
                }
            }
            cnty=cnty+b[p];
            if(cntx>=x && cnty>=y)
            {
                cout<<count;
                exit(0);
            }
            else
            {
                count++;
            }
        }
    }
    else
    {
         for(lli i=0;i<n;i++)
        {
             cpyb[i]=b[i];
        }
        lli q=sizeof(cpyb)/sizeof(cpyb[0]);
        sort(cpyb,cpyb+q);
        for(lli i=0;i<n;i++)
        {
            cnty=cnty+cpyb[i];
            for( j=0;j<n;j++)
            {
                if(cpyb[i]==b[j])
                {
                    p=j;
                    b[j]=-1;
                }
            }
            cntx=cntx+a[p];
            if(cntx>=x && cnty>=y)
            {
                cout<<count;
                exit(0);
            }
            else
            {
                count++;
            }
        }
    }
        cout<<"-1";
    return 0;
}


