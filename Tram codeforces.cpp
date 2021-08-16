
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,sum=0,max;
    cin>>n;
    int a[n],b[n],new1[2000];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];cin>>b[i];
    }
    sum=sum + a[0];
    new1[0]=sum;
    int p=1;
    for(int i=1;i<n;i++)
    {
        sum=sum+b[i-1];
       new1[p]=sum;
        sum=sum-a[i];
         new1[p+1]=sum;
         p++;

    }
    sum=sum+b[n-1];
    new1[p]=sum;
    max=new1[0];
    for(int i=0;i<=p+1;i++)
    {
        if(max<new1[i]){
            max=new1[i];
        }
    }
    cout<<max;
    return 0;
}
