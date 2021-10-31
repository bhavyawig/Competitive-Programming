#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,even=0,odd=0;
        cin>>n;
        lli a[n],eve[n],od[n],k=0,q=0,p=0,w=0;
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even++;
                eve[k]=a[i];
                k++;
                p=k;
            }
            else
            {
                odd++;
                od[q]=a[i];
                q++;
                w=q;
            }
        }
        if(odd>=1 && even>=1)
        {
            for(lli i=0;i<w;i++)
            {
                cout<<od[i]<<" ";
            }
            for(lli i=0;i<p;i++)
            {
                cout<<eve[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}


