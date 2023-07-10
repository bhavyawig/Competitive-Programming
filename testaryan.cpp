#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


 int aryan(int n)
{
   if(n==5)
   return 0;

  int height=aryan(++n);
  cout<<height<<" ";
   return max(height,1);
}
int main()
{
   int f=aryan(1);
   cout<<endl;
   cout<<f;

    return 0;
}


