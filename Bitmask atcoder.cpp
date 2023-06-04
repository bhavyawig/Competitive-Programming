#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int binary(string temp)
{
    return stoi(temp, 0, 2);
}

int main()
{
   string s,temp;
   int n;
   cin>>s>>n;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]=='?')
       {
           temp+='1';
           for(int j=i+1;j<s.length();j++)
           {
               if(s[j]=='?') temp+='0';
               else temp+=s[j];
           }
           //cout<<temp<<endl;
           if(binary(temp)<n) s[i]='1';
           else
           s[i]='0';
           for(int e=temp.length();e>=i;e--)
           temp.pop_back();
       }
       temp+=s[i];
   }
   if(binary(s)<n)
    cout<<binary(s)<<endl;
   else cout<<"-1"<<endl;
    return 0;

}
