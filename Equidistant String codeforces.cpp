#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   string t;
   cin>>t;
   int cnt=0;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]!=t[i])
        cnt++;
   }
   if(cnt%2==0)
   {
       string ans;
       bool kro=false;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]==t[i])
            ans+=s[i];
           else
           {
               if(kro==false){
                ans+=s[i];
               kro=true;}
               else{
                ans+=t[i];
               kro=false;}
           }
       }
       cout<<ans<<endl;
   }
   else
    cout<<"impossible"<<endl;

    return 0;
}


