#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli mm=0,mp=0,pm=0,pp=0;
    for(lli i=0;i<n;i++)
    {
        lli a,b;
        cin>>a>>b;
        if(a>=0 && b>=0)
        {
            pp++;
        }
        if(a>=0 && b<0)
        {
            pm++;
        }
        else if(a<0 && b<0)
        {
            mm++;
        }
        else if(a<0 && b>=0)
        {
            mp++;
        }
    }
    if(pp==0 && pm==0)
    {
        cout<<"Yes"<<endl;
    }
    else if(mm==0 && mp==0)
    {
        cout<<"Yes"<<endl;
    }
    else if(pp==0 && pm==1)
    {
        cout<<"Yes"<<endl;
    }
    else if(pp==1 && pm==0)
    {
        cout<<"Yes"<<endl;
    }
    else if(mm==0 && mp==1)
    {
        cout<<"Yes"<<endl;
    }
    else if(mm==1 && mp==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}

