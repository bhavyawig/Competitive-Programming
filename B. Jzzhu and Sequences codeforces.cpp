#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   double x,y;
   cin>>x>>y;
   double n;
   cin>>n;
   int arr[7];
   arr[1]=x;
   arr[2]=y;
   arr[3]=y-x;
   arr[4]=-x;
   arr[5]=-y;
   arr[6]=x-y;
   lli store=0;
   if(ceil(((n-1)/6)+1)==floor(((n-1)/6)+1))
   {
       store=arr[1]%1000000007;
       if(store<0)
        cout<<store+1000000007<<endl;
       else
        cout<<store<<endl;
   }
   else if(ceil(((n-2)/6)+1)==floor(((n-2)/6)+1))
   {
store=arr[2]%1000000007;
       if(store<0)
        cout<<store+1000000007<<endl;
       else
        cout<<store<<endl;   }
   else if(ceil(((n-3)/6)+1)==floor(((n-3)/6)+1))
   {
       store=arr[3]%1000000007;
       if(store<0)
        cout<<store+1000000007<<endl;
       else
        cout<<store<<endl;
   }
  else  if(ceil(((n-4)/6)+1)==floor(((n-4)/6)+1))
   {
      store=arr[4]%1000000007;
       if(store<0)
        cout<<store+1000000007<<endl;
       else
        cout<<store<<endl;
   }
   else if(ceil(((n-5)/6)+1)==floor(((n-5)/6)+1))
   {
       store=arr[5]%1000000007;
       if(store<0)
        cout<<store+1000000007<<endl;
       else
        cout<<store<<endl;
   }
  else if(ceil(((n-6)/6)+1)==floor(((n-6)/6)+1))
   {
       store=arr[6]%1000000007;
       if(store<0)
        cout<<store+1000000007<<endl;
       else
        cout<<store<<endl;
   }

    return 0;
}

