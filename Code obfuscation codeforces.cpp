#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   int a[26]={0};
   int ohoo=0;
   for(int i=0;i<s.length();i++)
   {
       if(a[s[i]-97-1]==1 && s[i]-97!=0){
       a[s[i]-97]=1;}
       else if(s[i]-97==0)
       {
           a[s[i]-97]=1;
       }
       else
        ohoo++;
   }
   if(ohoo>=1)
    cout<<"NO";
   else
    cout<<"YES";
    return 0;
}


