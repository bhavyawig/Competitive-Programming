#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    string s;
    cin>>s;
    string a,b;
    lli diffa=0,diffb=0,cntr=0,cntb=0,bkobadlo=0,bkobadlo1=0,rkobadlo=0,rkobadlo1=0;
    for(lli i=0;i<n;i++)
    {
        if(i%2==0)
            a+='r';
        else
            a+='b';
        if(i%2==0)
            b+='b';
        else
            b+='r';
    }
    for(lli i=0;i<n;i++)
    {
        if(s[i]=='r')
            cntr++;
        else
            cntb++;
        if(s[i]!=a[i])
        {
            diffa++;
            if(s[i]=='b')
                bkobadlo++;
            else
                rkobadlo++;
        }
        if(s[i]!=b[i])
        {
            diffb++;
            if(s[i]=='b')
                bkobadlo1++;
            else
                rkobadlo1++;
        }
    }
    if(cntr==0)
    {
        cout<<min(diffa,diffb)<<endl;
    }
    else if(cntb==0)
    {
        cout<<min(diffa,diffb)<<endl;
    }
    else
    {
        lli ans=min(diffa,diffb);
        if(ans==diffa)
        {
            lli no=min(bkobadlo,rkobadlo);
            no=no*2;
            ans=ans-no;
            cout<<ans+(no/2);
        }
        else
        {
            lli no1=min(bkobadlo1,rkobadlo1);
            no1=no1*2;
            ans=ans-no1;
            cout<<ans+(no1/2);
        }
    }

    return 0;
}

