#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,sum=0,even=0,odd=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        if(sum%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
           for(int i=0;i<n;i++)
           {
               if(a[i]%2==0)
               {
                   even++;
               }
               if(a[i]%2!=0)
               {
                   odd++;
               }
           }
           if(even>=1 && odd>=1)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
        }
    }
    return 0;
}
