#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s,t;
   cin>>s>>t;
   map<char,int> m,m1;
   int len=s.length(),cntt=0,cnts=0,fail=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]!='@') m[s[i]]++;
        else cnts++;
         if(t[i]!='@') m1[t[i]]++;
        else cntt++;
    }
    for(int i=0;i<len;i++)
    {
        if(s[i]!='@')
        {
            if(m1[s[i]]>=1)
            {
                m1[s[i]]--;
                if(m1[s[i]]==0) m1.erase(s[i]);
            }
            else
            {
                if(s[i]=='a' || s[i]=='t' || s[i]=='c' || s[i]=='o' || s[i]=='d' || s[i]=='e' || s[i]=='r')
                {
                    if(cntt>=1) cntt--;
                    else
                    {
                        fail++;
                        break;
                    }
                }
                else
                {
                    fail++;
                    break;
                }
            }
        }
    }

     for(int i=0;i<len;i++)
    {
        if(t[i]!='@')
        {
            if(m[t[i]]>=1)
            {
                m[t[i]]--;
                if(m[t[i]]==0) m.erase(t[i]);
            }
            else
            {
                if(t[i]=='a' || t[i]=='t' || t[i]=='c' || t[i]=='o' || t[i]=='d' || t[i]=='e' || t[i]=='r')
                {
                    if(cnts>=1) cnts--;
                    else
                    {
                        fail++;
                        break;
                    }
                }
                else
                {
                    fail++;
                    break;
                }
            }
        }
    }
    if(fail==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;

}
