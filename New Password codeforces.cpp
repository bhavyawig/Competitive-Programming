#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,k;
   cin>>n>>k;
   string str;
   string s="abcdefghijklmnopqrstuvwxyz";
   for(lli i=0;i<n;i++)
   {
       str+=s[i%k];
   }
   cout<<str<<endl;
    return 0;
}

