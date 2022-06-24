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
       lli a[n];
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
       }
       if(n==1 || n==2)
       {
           cout<<"YES"<<endl;
       }
       else{
       lli strt=0,last=n-1,strt1=0,last1=n-1;
       set<lli>s,s1;
       while(strt<last)
       {
           if(s.find(a[strt])!=s.end())
           {
               strt++;
           }
           if(s.find(a[last])!=s.end())
           {
               last--;
           }
           if(a[strt]==a[last])
           {
               strt++;
               last--;
           }
           else
           {
               s.insert(a[last]);
               last--;
           }
       }
       while(strt1<last1)
       {
           if(s1.find(a[strt1])!=s1.end())
           {
               strt1++;
           }
           if(s1.find(a[last1])!=s1.end())
           {
               last1--;
           }
           if(a[strt1]==a[last1])
           {
               strt1++;
               last1--;
           }
           else
           {
               s1.insert(a[strt1]);
               strt1++;
           }
       }
       if(n==3 && (s.size()==1 || s.size()==0 || s1.size()==1 ))
       {
            cout<<"YES"<<endl;
       }
       else if( n>3 && (s.size()==1 || s.size()==0 || s1.size()==1) )
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
       }
   }


    return 0;
}

