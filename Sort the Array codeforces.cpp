#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli a[n],cpy[n];
    for(lli i=0; i<n; i++)
    {
        cin>>a[i];
        cpy[i]=a[i];
    }
    lli q=sizeof(cpy)/sizeof(cpy[0]);
    sort(cpy,cpy+q);
    lli strt=-1,ed=-1;
    for(lli i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            strt=i-1;
            break;   // 3 2 1
        }            // 0 1 2
    }
     for(lli i=n-1;i>0;i--)
    {
        if(a[i]<a[i-1])
        {
            ed=i;
            break;
        }
    }
    //cout<<"strt "<<strt<<endl;
    //cout<<"end "<<ed<<endl;
    if(strt==-1 && ed==-1)
    {
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
    }
    else
    {
        lli z=0;
        reverse(a+strt,a+ed+1);
        /*for(lli i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        } */
        for(lli i=0;i<n;i++)
        {
            if(a[i]!=cpy[i])
            {
                z++;
            }
        }
        if(z==0)
        {
            cout<<"yes"<<endl;
            cout<<strt+1<<" "<<ed+1<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}

