#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli a[3];
       for(int i=0;i<3;i++)
        cin>>a[i];
       sort(a,a+3);
       if(a[2]>a[0]+a[1])
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }

    return 0;
}


