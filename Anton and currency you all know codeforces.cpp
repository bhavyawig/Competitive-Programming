#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   lli len=s.length();
   lli even=0,store=0,storekro=0;
   lli last=int(s[len-1])-48;
   char e1,e2;
   char d=s[len-1];
   lli z=0,ee=0;
   string b,c;
   for(lli i=0;i<len-1;i++)
   {
       lli no=int(s[i])-48;
       if(no%2==0 && last>=no && ee==0)
       {
           store=i;
           e1=s[i];
           even++;
           ee++;
           z++;
       }
      else if(no%2==0 && no>last)
       {
           storekro=i;
           even++;
           e2=s[i];
       }
   }
   if(even==0)
   {
       cout<<-1<<endl;
   }
   else
   {
       if(z>0)
       {
           for(lli i=0;i<len-1;i++)
           {
               if(i==store)
               {
                   cout<<d;
               }
               else
               {
                   cout<<s[i];
               }
           }
           cout<<e1<<endl;
       }
       else
       {
           for(lli i=0;i<len-1;i++)
           {
               if(i==storekro)
               {
                   cout<<d;
               }
               else
               {
                   cout<<s[i];
               }
           }
           cout<<e2<<endl;
       }

   }



    return 0;
}

