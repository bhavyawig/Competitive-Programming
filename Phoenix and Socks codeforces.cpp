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
       lli n,l,r;
       cin>>n>>l>>r;
       vector<lli> lc;
       vector<lli> rc;
       for(lli i=0;i<l;i++)
       {
           lli samplenumber;
        cin>>samplenumber;
        lc.push_back(samplenumber);
       }
       for(lli i=0;i<r;i++)
       {
           lli samplenumber2;
        cin>>samplenumber2;
        rc.push_back(samplenumber2);
       }
       if(l<r)
       {
           see=l;
           large=r;
       }
       else
       {
           see=r;
           large=l;
       }
       for(int i=0;i<large;i++)
       {
           ans=false;
           ans=binary_search()
       }
       if(l==r)
       {
           map<lli,lli> me,me1;
           sort(lc.begin(),lc.end());
           sort(rc.begin(),rc.end());
           bool ans=false;
           lli itern=
          for(lli i=0;i<l;i++)
          {
              ans=false;
              ans=binary_search(rc.begin(),rc.end(),lc[i]);
              if(ans==true)
              {
                  inter++;
              }
          }
          for(lli i=0;i<r;i++)
          {
              ans=false;
              ans=binary_search(lc.begin(),lc.end(),rc[i]);
              if(ans==true)
              {
                  outern++;
              }
          }
          lli take=min(inter,outern);
       }
   }

    return 0;
}

