#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cout<<"enter size of array"<<endl;
   cin>>test;
   int arr[test];
   for(int i=0;i<test;i++)
    cin>>arr[i];
    int ans=INT_MIN,no1=0,no2=0;
   for(int i=0;i<test;i++)
   {
       for(int j=i+1;j<test;j++)
       {
           int val=arr[i]*arr[j];
           ans=max(ans,val);
       }
   }
   for(int i=0;i<test;i++)
   {
       for(int j=i+1;j<test;j++)
       {
           int val=arr[i]*arr[j];
           if(val==ans)
           {
               no1=arr[i];
               no2=arr[j];
           }
       }
   }
   cout<<" Pair is "<<no1<<" "<<no2<<endl;
   cout<<"Product is "<<ans<<endl;

    return 0;
}


