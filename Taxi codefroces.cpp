
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,count=0,c1=0,c2=0,c3=0,l=0;
    cin>>n;
    vector<lli> a;
    for(lli i=0;i<n;i++)
    {
        lli x;
        cin>>x;
        a.push_back(x);
        if(a[i]==1)
        {
            c1++;
        }
        else if(a[i]==2)
        {
            c2++;
        }
        else if(a[i]==3)
        {
            c3++;
        }
        else
        {
            count++;
        }
    }
    if(c1>=4)
   {
       if(c1%4==0)
       {
           count=count+(c1/4);
           c1=0;
       }
       else
       {
           count=count+(c1/4);
           c1=c1%4;
       }
   }
   if(c3>=c1)
   {
       count=count+c1;
       c3=c3-c1;
       c1=0;
   }
   else
   {
       count=count+c3;
       c1=c1-c3;
       c3=0;
   }
   if(c2%4==0)
   {
       count=count+(c2/4);
       c2=0;
   }
   else if(c2%4!=0)
   {
       count=count+(c2/4);
       c2=c2%4;
   }
   if(c2>=1 && c1>=2)
   {
       if(2*c1==c2)
       {
           count=count+c2;
           c1=0;  c2=0;
       }
       else
       {
           if(c1%2==0)
           {
               c1=c1/2;
               if(c2>=c1)
               {
                   count=count+c1;
                   c1=0;
                   c2=c2-c1;
               }
           }
           else
           {
               l=c1-(c1/2);
               c1=c1/2;
               if(c2>=c1)
               {
                   count=count+c1;
                   c2=c2-c1;
               }
           }
       }
   }
   count=count+c2+c3+l;
      cout<<count<<endl;
    return 0;
}
