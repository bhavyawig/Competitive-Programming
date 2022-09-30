#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string a,b;
   cin>>a>>b;
   lli la=a.length();
   lli lb=b.length();
   if(a==b)
    cout<<-1<<endl;
   else
    cout<<max(la,lb)<<endl;
    return 0;
}


