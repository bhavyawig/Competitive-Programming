#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli count=0;
       for(int i=1;i<n;i++)
       {
           if(arr[i]==arr[i-1])
           {
               arr[i]=-1;
               count++;
           }
       }
       return count;
   }

    return 0;
}

