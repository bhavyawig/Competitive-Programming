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
      string a[n];
      lli cnt=0,a1=0,b=0;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          if(a[i]=="O" || a[i]=="AB") cnt++;
          if(a[i]=="A") a1++;
          if(a[i]=="B") b++;
      }
      cout<<max(a1,b)+cnt<<endl;
    }

    return 0;

}
