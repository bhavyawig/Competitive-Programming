#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
        lli n,k;
        cin>>n>>k;
        lli a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            int ind1=i;
            if(i+k<n)
            {
                int ind2=i+k;
                if(a[i]>a[i+k])
                {
                    swap(a[i],a[k]);
                }
            }
        }
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i]!=i)
                cnt++;
        }
        if(cnt==0)
            cout<<"0"<<endl;
        else if(cnt==2)
            cout<<"1"<<endl;
        else
            cout<<"-1"<<endl;
    }

    return 0;

}
