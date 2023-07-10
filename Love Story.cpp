#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     string s="codeforces";
     string s1;
     cin>>s1;
     int cnt=0;
     for(int i=0;i<10;i++)
     {
         if(s[i]!=s1[i]) cnt++;
     }
     cout<<cnt<<endl;
    }

    return 0;

}
