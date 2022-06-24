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
       lli len=s.length();
       lli sum=0,sum2=0;
       if(len%2==0)
       {
           for(lli i=0;i<len;i++)
            sum+=s[i]-96;

           cout<<"Alice "<<sum<<endl;
       }
       else{
       if(s[0]>=s[len-1])
       {
           for(lli i=0;i<len-1;i++)
            sum+=s[i]-96;

            sum2=s[len-1]-96;
       }
       else
       {
           for(lli i=1;i<len;i++)
            sum+=s[i]-96;

            sum2=s[0]-96;
       }
       if(sum>sum2)
       {
           cout<<"Alice "<<sum-sum2<<endl;
       }
       else
       {
           cout<<"Bob "<<sum2-sum<<endl;
       }
       }
   }

    return 0;
}

