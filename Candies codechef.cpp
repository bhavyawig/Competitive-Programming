#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       lli a[2*n];
       lli check=0;
       map<int,int> m;
       for(int i=0;i<2*n;i++)
       {
           cin>>a[i];
           m[a[i]]++;
       }
       for(auto itr:m)
       {
           if(itr.second > 2)
            check++;
       }
       if(check>=1)
        cout<<"No"<<endl;
       else
        cout<<"Yes"<<endl;
   }

    return 0;
}


