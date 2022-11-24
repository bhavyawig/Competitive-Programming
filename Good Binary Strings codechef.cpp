#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       string s;
       cin>>s;
       lli count=0;
       lli zero1=0,one0=0,cpy1=0,cpy2=0;
       lli len=s.length();
       for(lli i=1;i<len;i++)
       {
           if(s[i]=='1' && s[i-1]=='0')
            zero1++;
           if(s[i]=='0' && s[i-1]=='1')
            one0++;
       }
       cpy1=zero1;cpy2=one0;
       if(s[0]=='1')
       {
           if(s[1]=='0')
            one0--;
           else
            zero1++;
           if(one0==zero1)
            count++;
            one0=cpy2;zero1=cpy1;
       }
       else
       {
           if(s[1]=='0')
            one0++;
           else
            zero1--;
           if(one0==zero1)
            count++;
            one0=cpy2;zero1=cpy1;
       }
        if(s[len-1]=='1')
       {
           if(s[len-2]=='0')
            zero1--;
           else
            one0++;
           if(one0==zero1)
            count++;
            one0=cpy2;zero1=cpy1;
       }
       else
       {
           if(s[len-2]=='0')
            zero1++;
           else
            one0--;
           if(one0==zero1)
            count++;
            one0=cpy2;zero1=cpy1;
       }
       for(lli i=1;i<len-1;i++)
       {
           if(s[i]=='1')
           {
               if(s[i-1]=='0' && s[i+1]=='1')
               zero1++;
               if(s[i-1]=='1' && s[i+1]=='0')
                one0++;
                if(s[i-1]=='1' && s[i+1]=='1')
                {
                    one0++;zero1++;
                }

                if(s[i-1]=='0' && s[i+1]=='0')
               {
                   zero1--;one0--;
               }
               if(s[i-1]=='0' && s[i+1]=='1')
               zero1--;
               if(s[i-1]=='1' && s[i+1]=='0')
               one0--;
                if(one0==zero1)
                   count++;
            one0=cpy2;zero1=cpy1;
           }
           else
           {
               if(s[i-1]=='0' && s[i+1]=='0')
               {
                   zero1++;one0++;
               }
               if(s[i-1]=='0' && s[i+1]=='1')
               zero1++;
               if(s[i-1]=='1' && s[i+1]=='0')
               one0++;

               if(s[i-1]=='0' && s[i+1]=='1')
               zero1--;
               if(s[i-1]=='1' && s[i+1]=='0')
                one0--;
                if(s[i-1]=='1' && s[i+1]=='1')
                {
                    one0--;zero1--;
                }

                if(one0==zero1)
                   count++;
            one0=cpy2;zero1=cpy1;
           }
       }
       cout<<count<<endl;
   }

    return 0;
}


