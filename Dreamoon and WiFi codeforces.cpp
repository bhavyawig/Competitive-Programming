#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s1,s2;
   cin>>s1>>s2;
   lli count=0;
   for(lli i=0;i<s1.length();i++)
   {
       if(s1[i]=='+')
        count++;
       else
        count--;
   }
   lli ques=0,count2=0;
   for(lli i=0;i<s2.length();i++)
   {
       if(s2[i]=='+')
        count2++;
       else if(s2[i]=='-')
        count2--;
        else
            ques++;
   }
   if(count==count2 && ques==0)
   {
       cout<<"1.00000"<<endl;
   }
   else if(ques==0 && count!=count2)
   {
       cout<<"0.0000"<<endl;
   }
   else
   {
       double diff=count-count2;
       double total=pow(2,ques);
       if(ques==2 && diff==0)
       {
           cout<<"0.50000"<<endl;
       }
       else if(ques==2 && (diff==1 || diff==-1))
       {
           cout<<"0.25000"<<endl;
       }
       else
       {
           double ans;
           if(diff==1 || diff==-1)
           {
                ans=((total/2)-1)/total;
           }
           else if(diff==ques || diff==-ques)
           {
                ans=((total-(2*((total/2)-1)))-1)/total;
           }
           else
           {
               ans=0.0000000;
           }
           cout<<ans<<endl;
       }


   }


    return 0;
}

