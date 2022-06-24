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
       lli vec[26][len];
       lli ans=0,count=0,onlythen=0,pss=0;
       set<char> sun;
        for(lli i=0;i<26;i++)
       {
           for(lli j=0;j<len;j++)
           {
               vec[i][j]=0;
               //cout<<vec[i][j]<<" ";
           }
           //cout<<endl;
       }
       for(lli i=0;i<len;i++)
       {
           sun.insert(s[i]);
          // a[int(s[i])-97][i]=1;
          vec[lli(s[i])-97][i]=1;
       }
       //cout<<sun.size();
      for(lli i=0;i<26;i++)
       {
           pss=0;count=0,ans=0;
           for(lli j=0;j<len;j++)
           {
               //cout<<a[int(s[i])-97][j]<<" ";
               if(vec[i][j]==0)
                count++;
               else
               {
                   if(count>=sun.size())
                    ans++;
                   else
                    count=0;
               }
               if(vec[i][j]==1)
                pss++;
           }
         //cout<<ans<<endl;
           if(count>=sun.size())
                    ans++;
                   else
                    count=0;
                   // cout<<ans<<endl;
           if(ans>=1 && pss>=1)
            onlythen++;
       }
       if(onlythen==0)
        cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;
        sun.clear();
        memset(vec,0,sizeof(vec[0][0])*len*26);
   }

    return 0;
}

