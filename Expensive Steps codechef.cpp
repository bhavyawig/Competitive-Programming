#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,x1,x2,y1,y2;
       cin>>n>>x1>>y1>>x2>>y2;
       lli poss1=INT_MAX,poss2=INT_MAX,poss3=INT_MAX,poss4=INT_MAX;
       if(x1>=y1)
       {
           lli step=n-x1+1;
           lli step2=y1;
            poss1=min(step2,step);
       }
       else
       {
           lli stepp=n-y1+1;
           lli stepp2=x1;
            poss2=min(stepp2,stepp);
       }
       if(x2>=y2)
       {
           lli step1=n-x2+1;
           lli step12=y2;
           poss3=min(step12,step1);
       }
       else
       {
           lli stepp1=n-y2+1;
           lli stepp21=x2;
           poss4=min(stepp21,stepp1);
       }
       lli ans=abs(x1-x2)+abs(y1-y2);
       if(poss1==INT_MAX)
       {
           if(poss3==INT_MAX)
           {
               lli ans2=poss2+poss4;
               cout<<min(ans,ans2)<<endl;
           }
           else
           {
               lli kro=poss3+poss2;
               cout<<min(kro,ans)<<endl;
           }
       }
       else
       {
           if(poss3==INT_MAX)
           {
               lli ans12=poss1+poss4;
               cout<<min(ans,ans12)<<endl;
           }
           else
           {
               lli kro12=poss3+poss1;
               cout<<min(kro12,ans)<<endl;
           }
       }

   }

    return 0;
}


