#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   lli ans=1,count=0;
   lli p=0;
   for(lli i=1;i<s.length();i++)
   {
       if(s[i]==s[i-1])
       {
           ans++;
       }
       else
       {
           if(ans%5==0)
           {
               count=count+(ans/5);
           }
           else
           {
               count=count+(ans/5)+1;
              // cout<<"aa gya"<<count<<endl;
           }
           ans=1;
       }
       p=ans;
   }
   lli len=s.length();
    if(s[len-1]!=s[len-2]){
   cout<<count+1<<endl;
    }
    else
    {
        if(p%5==0)
        {
            count=count+(ans/5);
            cout<<count<<endl;
        }
        else
        {
            count=count+(ans/5)+1;
            cout<<count<<endl;
        }
    }
    return 0;
}

