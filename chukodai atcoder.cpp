#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   lli a,b;
   cin>>a>>b;
   swap(s[a-1],s[b-1]);
   cout<<s<<endl;

    return 0;
}

