#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   lli first=m-0;
   lli last=n-m;
   if(n==1 && m==1)
   {
       cout<<"1"<<endl;
   }
   else if(first>last)
   {
       cout<<m-1<<endl;
   }
   else
   {
       cout<<m+1<<endl;
   }

    return 0;
}

