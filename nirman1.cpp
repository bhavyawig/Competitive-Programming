#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   lli arr[test];
   lli left=-1,right=-1;
   for(int i=1;i<=test;i++)
   {
       if(test%i==0)
       {
           if(left==-1 && right==-1)
           {
               left++;
               right++;
               arr[left]=i;
           }
           else
           {
               right++;
               arr[right]=i;
           }
       }
   }
   for(int i=left;i<=right;i++)
   {
       cout<<arr[i]<<" ";
   }

    return 0;
}


