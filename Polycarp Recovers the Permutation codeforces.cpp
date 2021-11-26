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
      if(n==1)
      {
          cout<<a[0]<<endl;
      }
      else if(n==2)
      {
          cout<<a[0]<<" "<<a[1]<<endl;
      }
      else if(n==3)
      {
          cout<<a[1]<<" "<<a[0]<<" "<<a[2]<<endl;
      }
      else
      {
         if(n%2==0)
          {
              lli nt[n];
              lli k=0;
              for(lli i=n/2 -1;i>=0;i--)
              {
                  nt[k]=a[i];
                  k++;
              }
              for(lli i=n-1;i>=n/2;i--)
              {
                  nt[k]=a[i];
                  k++;
              }
              for(lli i=0;i<n;i++)
              {
                  cout<<nt[i]<<" ";
              }
            cout<<endl;
          }
          else
          {
              if(a[n/2]==n)
              {
                  cout<<"-1"<<endl;
              }
              else
              {
                  lli nt[n];
                  lli k=0;
              for(lli i=n/2;i>=0;i--)
              {
                  nt[k]=a[i];
                  k++;
              }
              for(lli i=n-1;i>n/2;i--)
              {
                  nt[k]=a[i];
                  k++;
              }
              for(lli i=0;i<n;i++)
              {
                  cout<<nt[i]<<" ";
              }
                  cout<<endl;

              }
          }
      }
   }

    return 0;
}

