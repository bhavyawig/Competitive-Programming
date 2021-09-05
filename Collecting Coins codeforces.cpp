#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int a[3],sum=0;
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        int n;
        cin>>n;
        int q=sizeof(a)/sizeof(a[0]);
        sort(a,a+q);
        sum=sum+(a[2]-a[0]);
         sum=sum+(a[2]-a[1]);
         if(sum==n)
         {
             cout<<"YES"<<endl;
         }
         else if(sum<n)
         {
             int x=n-sum;
             if(x%3==0)
             {
                 cout<<"YES"<<endl;
             }
             else
             {
                 cout<<"NO"<<endl;
             }
         }
         else
         {
             cout<<"NO"<<endl;
         }
    }
    return 0;
}

