#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  lli m;
  cin>>m;
  vector<lli> days(m);
  lli sum=0;
  vector<lli> pre(m);
  for(lli i=0;i<m;i++)
  {
    lli a; cin>>a;
    days[i]=a;
    sum+=a;
  }
  pre[0]=days[0];
  for(lli i=1;i<m;i++)
  pre[i]=pre[i-1]+days[i];
  //cout<<sum;
  lli finalday=(sum+1)/2;
 // for(int i=0;i<m;i++)
 // cout<<pre[i]<<" ";
  lli store=0,index=-1,uff=-1;
  for(int i=0;i<m;i++)
  {
     if(pre[i]==finalday && i-1>=0)
    uff=pre[i-1];
    if(pre[i]<=finalday)
    {
        store=pre[i];
        index=i;
    }
    else
    break;
  }
  //cout<<finalday<<endl;
  lli days1=finalday-store;
 // cout<<finalday<<" "<<uff;
   if(index==-1)
  cout<<"1"<<" "<<days1;
  else if(days1==0 && uff!=-1)
  cout<<index+1<<" "<<finalday-uff;
  else if(days1==0)
  cout<<index+1<<" "<<finalday;
  else
  cout<<index+2<<" "<<days1;
    return 0;
}