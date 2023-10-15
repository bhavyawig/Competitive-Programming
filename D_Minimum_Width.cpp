#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
     lli n,m;
     cin>>n>>m;
     vector<lli> l(n);
     lli maxi=INT_MIN, sum=0;
     for(lli i=0;i<n;i++)
     {
        lli a; cin>>a;
        l[i]=a;
        maxi=max(maxi,a);
        sum+=a;
     }
     sum+=(n-1);
    // cout<<sum<<endl;
     lli strt=maxi,end=sum,store=sum;
     while(strt<=end)
     {
        lli mid=strt+(end-strt)/2;
       // if(strt+(end-strt)%2!=0) mid++;
        lli chahiye=1;
        lli abhi=0;
        lli no=0;
        for(lli i=0;i<n;i++)
        {
            if(l[i]>mid) no++;
            if(i==0 && abhi+l[i]<=mid)
            {
                abhi+=l[i];
            }
            else if(i>0 && abhi+l[i]+1<=mid)
            {
                abhi+=l[i];
                 abhi++;
            }
            else
            {
                chahiye++;
                abhi=l[i];
            }
        }
        if(chahiye<=m && no==0)
        {
       //  cout<<mid<<" ";
             store=mid;
            end=mid-1;
        }
        else
        {
           // cout<<strt<<" ";
            strt=mid+1;
        }
     }
   //  if(store==sum) cout<<store<<endl;
     cout<<store<<endl;

    return 0;
}