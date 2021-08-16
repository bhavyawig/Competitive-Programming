
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a[4],sum=0;
        for(j=0;j<4;j++)
        {
           cin>>a[j];
        }
        if(a[0]>=a[1])
        {
            sum=sum+a[0];
        }
        else{
            sum=sum+a[1];
        }
         if(a[2]>=a[3])
        {
            sum=sum+a[2];
        }
        else{
            sum=sum+a[3];
        }
        int n=sizeof(a)/sizeof(a[0]);
        sort(a,a+n);
        int sum2;
        sum2=a[2]+a[3];
        if(sum==sum2)
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }


    }
    return 0;
}
