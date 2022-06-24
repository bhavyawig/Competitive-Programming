#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli exp,newb;
   cin>>exp>>newb;
   lli count=0;
   while(exp>0 && newb>0)
   {
       if(exp==1 && newb==1)
       {
           break;
       }
       if(exp>=newb)
       {
           exp=exp-2;
           newb--;
           count++;
       }
       else{
        exp--;
        newb=newb-2;
        count++;
       }
   }
   cout<<count<<endl;


    return 0;
}
