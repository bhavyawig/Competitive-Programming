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
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       vector<lli> a;
       lli x=0,index=0,c=0;
    for(lli i=0;i<n;i++)
    {
        lli samplenumber;
        cin>>samplenumber;
        a.push_back(samplenumber);
    }
       //sort(a.begin(),a.end());
       lli sum=0;
       for(int i=0;i<n;i++)
       {
           sum+=a[i];
       }
       lli no=ceil(log(sum)/log(2));
       lli diff=pow(2,no)-sum;
       //cout<<"sum"<<sum<<endl;
       lli d=sum&(sum-1);
       //cout<<d<<endl;
       if( d==0)
       {
           cout<<"0"<<endl;
       }
       else{
       for(int i=0;i<n;i++)
       {
           if((diff+a[i])%a[i]==0 && c==0)
           {
               x=(a[i]+diff)/a[i];
               c++;
               index=i+1;
           }
       }
       cout<<"1"<<endl;
       cout<<"1 "<<x<<endl;
       cout<<index<<endl;

       }
   }

    return 0;
}

