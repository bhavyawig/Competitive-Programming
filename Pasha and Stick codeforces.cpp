#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,j=1;
    cin>>n;
    int i;
   if(n<=5)
   {
       cout<<"0";
   }
   else if(n%2!=0)
   {
       cout<<"0";
   }
   else if(n%2==0)
   {
       for(i=6;i<=n;i=i+4)
       {
           if(n==i || n==i+2)
           {
               cout<<j;
               exit(0);
           }
           j++;
       }
   }
    return 0;

}
