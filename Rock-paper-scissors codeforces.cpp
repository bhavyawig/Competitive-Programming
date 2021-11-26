#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string f,m,s;
   cin>>f>>m>>s;
   char a[3];
   a[0]=f[0]; a[1]=m[0]; a[2]=s[0];
   lli rock=0,sci=0,paper=0;
   for(lli i=0;i<3;i++)
   {
       if(a[i]=='R')
       {
           rock++;
       }
       else if(a[i]=='S')
       {
           sci++;
       }
       else
       {
           paper++;
       }
   }
   if((rock==1 && sci==1 && paper==1) || (rock=3) || (sci==3) || (paper==3));
   {
       cout<<"?"<<endl;
   }

    return 0;
}
