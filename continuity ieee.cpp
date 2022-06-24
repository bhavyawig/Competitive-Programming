
                                  // CONTINUITY

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   string s1;
   s1+=s;
   s1+=s;
   s1+=s;
   lli len=s1.length();
   if(len<=2)
   {
       cout<<"NO"<<endl;
   }
   else{
   for(lli i=2;i<len;i++)
   {
       if(s1[i]=='0' && s1[i-1]=='0' && s1[i-2]=='0')
       {
           cout<<"Yes"<<endl;
           break;
       }
        else if(s1[i]=='1' && s1[i-1]=='1' && s1[i-2]=='1')
       {
           cout<<"Yes"<<endl;
           break;
       }
       else
       {
           cout<<"no"<<endl;
           break;
       }
   }
   }

    return 0;
}

