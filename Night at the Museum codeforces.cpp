#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s;
cin>>s;
char start='a';
lli  sum=0;
for(int i=0;i<s.size();i++){
   lli l1=abs(s[i]- start);
   lli l2=26-abs(l1);
   sum+=min(l1,l2);
   start=s[i];
}
cout<<sum<<endl;
    return 0;
}
