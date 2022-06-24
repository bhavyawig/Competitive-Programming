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
       lli three=0,steps=0;
       cin>>n;
       lli a[n],b[n];
       for(lli i=0;i<n;i++)
       {
           cin>>a[i];
           b[i]=a[i];
       }
       lli q=sizeof(b)/sizeof(b[0]);
       sort(b,b+q);
       lli z=0,z1=0;
       vector<lli> v;
       for(lli i=0;i<n;i++)
       {
           if(a[i]!=b[i])
            z++;
       }
       if(z==0)
       {
           cout<<0<<endl;
       }
       else{
       for(lli i=n-3;i>=0;i--)
       {
           if(a[i]>a[i+1])
           {
               v.push_back(i);
               v.push_back(i+1);
               v.push_back(n-1);
             //  cout<<"pichla"<<i-1<<endl;
              // cout<<"sec last"<<n-2<<endl;
               //cout<<"last"<<n-1<<endl;
               a[i]=a[i+1]-a[n-1];
               steps++;
           }
          /* if(a[i-1]<=a[i])
            i++;
           else if(a[i-1]>a[i])
            i--;
           else if(i==n-1)
            i=n;
            */
       }
       /*for(lli i=0;i<n;i++)
       {
           cout<<a[i]<<" "<<i+1<<endl;
       }*/
       for(lli i=1;i<n;i++)
       {
           if(a[i]<a[i-1])
            z1++;
       }
       if(z1==0)
       {
           cout<<steps<<endl;
           for(lli i=0;i<v.size();i++)
           {
               cout<<v[i]+1<<" ";
               three++;
               if(three==3)
               {
                   cout<<endl;
                   three=0;
               }
           }
          // cout<<endl;
       }
       else
       {
           cout<<-1<<endl;
       }
   }
   }

    return 0;
}

