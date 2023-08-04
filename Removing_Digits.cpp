#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int t[1000001];
int dp(int n)
{
    if(n==0)
    return 0;
    if(t[n]!=-1)
    return t[n];

    string s=to_string(n);
    int maxi=0;
    for(int i=0;i<s.length();i++)
    {
        maxi=max(maxi,s[i]-'0');
    }
    return t[n]=1+dp(n-maxi);
}

int main()
{
   int n;
   cin>>n;
   for(int i=0;i<=n;i++)
   t[i]=-1;
   int f=dp(n);
   cout<<f<<endl;
    return 0;
}