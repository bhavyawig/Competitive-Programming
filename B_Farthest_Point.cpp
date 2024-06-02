#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli a[n],b[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }

    for(int i=0;i<n;i++)
    {
        double maxi=INT_MIN,pos=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                double x=(a[i]-a[j])*(a[i]-a[j]);
                double y=(b[i]-b[j])*(b[i]-b[j]);
                double dist=sqrt(x+y);

                if(dist>maxi)
                {
                    maxi=dist;
                    pos=j+1;
                }
            }
        }
        cout<<pos<<endl;
    }
}