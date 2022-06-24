
                              // ELIMINATE THE UNWANTED

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli first=n%10;
   n=n/10;
   lli second=n;
   if(first>=second)
   {
       sum+=first;
       if(second==first+1 || second==first-1)
       {
           continue;
       }
       else
       {
           sum+=second;
       }
   }
   else
   {
       sum+=second;
       if(first==second+1 || first==second-1)
       {
           continue;
       }
       else
       {
           sum+=first;
       }
   }
    return 0;
}

