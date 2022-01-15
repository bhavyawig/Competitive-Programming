#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

vector<lli> input(vector<lli> inputvector,lli endlimit)
{
    for(lli i=0;i<endlimit;i++)
    {
        lli samplenumber;
        cin>>samplenumber;
        inputvector.push_back(samplenumber);
    }
    return inputvector;
}

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   lli index=-1;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(int i=1;i<n;i++)
   {
       if(a[i]>a[i-1])
       {
           continue;
       }
       else
       {
           index=a[i-1];
           break;
       }
   }
   if(index==-1)
   {
       cout<<a[n-1]<<endl;
   }
   else{
   cout<<index<<endl;
   }

    return 0;
}

