#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     string s;
     cin>>s;
     sort(s.begin(),s.end());
     cout<<s<<endl;
    }

    return 0;

}
