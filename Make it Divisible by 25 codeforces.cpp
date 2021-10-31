#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        string n;
        cin>>n;
        lli count=0,cnt1=0,cnt2=0;
        for(lli i=n.length()-1;i>=0;i--)
        {
            if(n[i]=='0')
            {
                for(lli j=i;j>=0;j--)
                {
                    if(n[j]=='0' || n[j]=='5')
                    {
                        break;
                    }
                    else
                    {
                        cnt2++;
                    }
                }
            }
            else if(n[i]=='5')
            {
                for(lli j=i;j>=0;j--)
                {
                    if(n[j]=='2' || n[j]=='7')
                    {
                        break;
                    }
                    else
                    {
                        cnt1++;
                    }
                }
            }
            else
            {
                count++;
            }
        }
        if(cnt1>0 && cnt2>0 && count>0)
        {
            cout<<min(count,min(cnt1,cnt2))<<endl;
        }
        else if(cnt1>0 && cnt2>0 && count==0)
        {
            cout<<min(cnt1,cnt2)<<endl;
        }
        else if(cnt1>0 && count>0 && cnt2==0)
        {
            cout<<min(cnt1,count)<<endl;
        }
        else if(cnt2>0 && count>0 && cnt1==0)
        {
            cout<<min(count,cnt2)<<endl;
        }

    }

    return 0;
}

