#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m,a,b;
   cin>>n>>m>>a>>b;
   if((b/m)<a)
   {
       if(n%m==0)
       {
           cout<<(n/m)*b;
       }
       else
       {
           lli s=n/m;
           double s1=(ceil((double)n/m));
           //cout<<"s1"<<s1<<endl;
           n=n-(s*m);
           lli ans1=ans1+(s1*b);
           lli ans=0;
           ans=ans+(s*b);
           ans=ans+(n*a);
           cout<<min(ans,ans1);
       }
   }
   else
   {
       cout<<n*a<<endl;
   }

    return 0;
}

