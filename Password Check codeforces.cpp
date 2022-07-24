#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   lli no=0,small=0,lrg=0,spc=0;
   for(lli i=0;i<s.length();i++)
   {
       if(s[i]>=48 && s[i]<=57)
        no++;
       if(s[i]>=97 && s[i]<=122)
        small++;
       if(s[i]>=65 && s[i]<=90)
        lrg++;
           }
   if(no>=1 && small>=1 && lrg>=1  && s.length()>=5)
    cout<<"Correct"<<endl;
   else
    cout<<"Too weak"<<endl;

    return 0;
}

