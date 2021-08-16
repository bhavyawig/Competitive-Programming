#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,k,f,j,sum=0,swap,swap1,c,d;
        cin>>n;cin>>k;cin>>f;
        int s[n],e[n];
        for( j=0;j<n;j++)
        {
           cin>>s[j]>>e[j];
        }
        int x = sizeof(s) / sizeof(s[0]);
        int y = sizeof(e) / sizeof(e[0]);
        sort(s, s + x);
        sort(e, e + y);

        for(j=1;j<n;j++)
        {
            if(s[j]-e[j-1]<0)
            {
                continue;
            }
            else{
           sum=sum+(s[j]-e[j-1]);
            }
        }
        sum=sum+(f-e[n-1]);
        sum=sum+s[0];
        if(sum>=k)
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}

