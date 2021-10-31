#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,ans=0;
        cin>>n;
        string s;
        cin>>s;
        lli left[n],rig[n];
        for(lli i=0;i<n;i++)
        {
            left[i]=-1;  rig[i]=-1;
        }
        lli temp=-1,temp2=-1;
        for(lli i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                temp=i;
            }
            else
            {
                left[i]=temp;
            }
        }
        for(lli i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                temp2=i;
            }
            else
            {
                rig[i]=temp2;
            }
        }
        for(lli i=0;i<n;i++)
        {
          if(s[i]=='0')
          {
              if(left[i]!= -1 && rig[i]!= -1)
              {
                  ans += min(abs(i-rig[i]),abs(i-left[i]));
              }
              else if(rig[i]==-1)
              {
                  ans += abs(i-left[i]);
              }
              else if(left[i]==-1)
              {
                  ans += abs(i-rig[i]);
              }
          }
        }
       cout<<"Case #"<<e+1<<": "<<ans<<endl;
    }

    return 0;
}


