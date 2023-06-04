#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli n;
     cin>>n;
     string s;
     cin>>s;
     stack<char> st;
     int shit=0;
     for(int i=0;i<s.length();i++)
     {
         if(s[i]==')' && i==0)
         {
             shit++;
         }
         else if(s[i]=='(')
         {
             st.push('(');
         }
         else if(s[i]==')' && st.empty()==false && st.top()=='(')
         {
             st.pop();
         }
         else if(st.empty()==true && s[i]==')')
         {
             shit++;
         }
     }
     string yip;
     for(int i=0;i<shit;i++)
        yip+='(';
     yip+=s;
     for(int i=0;i<st.size();i++)
        yip+=')';

     int haash=0;
     for(int i=0;i<yip.length()-1;i++)
     {
         if(yip[i]=='(' && yip[i+1]==')')
            haash++;
     }
     cout<<haash<<endl;
    }

    return 0;

}
