#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
       lli n;
       cin>>n;
       vector<lli> a;
       lli count=0;
       for(lli i=0;i<n;i++)
       {
           lli samp;
           cin>>samp;
           a.push_back(samp);
       }
       lli m;
       cin>>m;
       vector<lli> b;
       for(lli i=0;i<m;i++)
       {
           lli samp1;
           cin>>samp1;
           b.push_back(samp1);
       }
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
       for(lli i=0;i<n;i++)
       {
           for(lli j=0;j<m;j++)
           {
               if(abs(a[i]-b[j])==1  || abs(a[i]-b[j])==0)
               {
                   b[j]=-1000;
                   count++;
                   break;
               }
           }
       }
       cout<<count<<endl;


    return 0;
}

