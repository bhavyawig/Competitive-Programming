#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   lli pnt=1;
   vector<lli> s;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==1)
       {
           s.push_back(i);
       }
   }
   for(lli i=1;i<s.size();i++)
   {
       lli diff=s[i]-s[i-1]-1; // 1010

            // 1001 -> 3 perm  (1,001 | 10,01 | 100,1) 2*4=4-1=3
                            //    vector = 1,3
                            // diff=2-1=1
       pnt=pnt*((diff*2)-(diff-1));
   }
   if(s.empty())
   {
       cout<<"0"<<endl;
   }
   else{

       cout<<pnt<<endl;
   }


    return 0;
}

