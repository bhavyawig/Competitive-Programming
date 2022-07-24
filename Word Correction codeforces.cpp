#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   string s;
   cin>>s;
   stack<char> s1;
   for(lli i=0;i<n;i++)
   {
       if(s1.empty()==true)
       {
           s1.push(s[i]);
       }
       else if(s1.empty()==false && (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') &&
               (s1.top()=='a' || s1.top()=='e' || s1.top()=='i' || s1.top()=='o' || s1.top()=='u' || s1.top()=='y'))
       {
           continue;
       }
       else
       {
           s1.push(s[i]);
       }
   }
   string str;
   while(s1.empty()==false)
   {
       str+=s1.top();
       s1.pop();
   }
   for(lli i=str.length()-1;i>=0;i--)
    cout<<str[i];

    return 0;
}

