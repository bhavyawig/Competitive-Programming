#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

vector<lli> input(vector<lli> inputvector,lli endlimit)
{
    for(lli i=0;i<endlimit;i++)
    {
        lli samplenumber;
        cin>>samplenumber;
        inputvector.push_back(samplenumber);
    }
    return inputvector;
}

int main()
{
   lli n;
   cin>>n;
   string a[n];
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
   }
   map<string,lli> m;
   for(lli i=0;i<n;i++)
   {
       if(m[a[i]]==0)
       {
           cout<<"OK"<<endl;
           m[a[i]]++;
       }
       else
       {
           cout<<a[i]<<m[a[i]]<<endl;
           m[a[i]]++;
       }
   }

    return 0;
}

