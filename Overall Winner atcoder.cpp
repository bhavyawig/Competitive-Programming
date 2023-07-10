#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int t=0,s1=0;
   for(int i=0;i<n;i++)
   {
       if(s[i]=='T') t++;
       else s1++;
   }
   if(t==s1)
   {
       int t1=0,s2=0;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='T') t1++;
       else s2++;
       if(t1==t)
       {
           cout<<"T"<<endl;
           break;
       }if(s2==t)
       {
           cout<<"A"<<endl;
           break;
       }
       }
   }
   else if(t>s1)
    cout<<"T"<<endl;
   else
    cout<<"A"<<endl;

    return 0;

}
