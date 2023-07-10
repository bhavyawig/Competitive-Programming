#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   vector<lli> a;
   for(int i=0;i<n;i++)
    {
        lli po; cin>>po;
        a.push_back(po);
    }
    vector<lli> sleep(n,0);
    sleep[0]=0;sleep[1]=0;
    for(int i=2;i<n;i++)
    {
        if(i%2==0){
        sleep[i]=a[i]-a[i-1]+sleep[i-1];
        }
        else
            sleep[i]=sleep[i-1];
    }
    //sleep[n-1]=sleep[n-2];
   // for(int i=0;i<n;i++)
  //  cout<<a[i]<<" "<<sleep[i]<<endl;
   lli q;
   cin>>q;
   for(int i=0;i<q;i++)
   {
       lli l,r;
       cin>>l>>r;
       int to=0,fr=0;
       vector<lli>::iterator l1,l2;
       l1=lower_bound(a.begin(),a.end(),l);
       lli ind1=l1-a.begin()-1;
       if(l==a[0]) ind1=0;
       l2=lower_bound(a.begin(),a.end(),r);
       lli ind2=l2-a.begin()-1;
       //cout<<ind1<<" "<<ind2;
       int val=sleep[ind2]-sleep[ind1];
       if(ind1%2!=0)
       {
            to=l-a[ind1];
       }
       if(ind2%2!=0)
       {
              fr=r-a[ind2];
       }
       int ans=val-to+fr;
       cout<<ans<<endl;
   }

    return 0;

}
