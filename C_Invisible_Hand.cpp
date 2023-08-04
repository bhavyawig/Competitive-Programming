#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli n,m;
    cin>>n>>m;
    vector<lli>  a,b;
    for(int i=0;i<n;i++)
    {
        lli o;
        cin>>o;
        a.push_back(o);
    }
     for(int i=0;i<m;i++)
    {
        lli oo;
        cin>>oo;
        b.push_back(oo);
    }
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   for(lli i=0;i<n;i++)
   {
    lli val=a[i];
    vector<lli>::iterator upper1, upper2;
    upper1=upper_bound(b.begin(),b.end(),val);
    upper2=upper_bound(a.begin(),a.end(),val);
    lli index2=upper1-b.begin(); 
    lli index1=upper2-a.begin();
   // cout<<index1<<" ";
    lli no1=index1;
   //cout<<index2<<" ";
    if(index2==m && b[m-1]<val)
    {
        cout<<min(b[m-1]+1,val)<<endl;
        break;
    }
    lli no2=b.size()-index2;
    if(no2<=no1)
    {
       // if(index2-1>=0)
        //cout<<min(val,b[index2-1]+1)<<endl;
      //  else
        cout<<val<<endl;
        break;
    }
   }
    return 0;
}