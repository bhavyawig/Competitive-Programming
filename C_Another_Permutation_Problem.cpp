#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli t;
   cin>>t;
   for(lli e=0;e<t;e++)
   {
    lli n;
    cin>>n;
    //cout<<n;
    vector<lli> a(n);
    for(lli i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    lli fuck=INT_MIN;
    sort(a.begin(),a.end());
    do{
    }while(next_permutation(a.begin(), a.end())); 
 //   do{
       // lli sum=0;
        // lli maxi=INT_MIN;
     //   for(lli i=0;i<n;i++)
       // {
         //   sum+=(a[i]*(i+1));
           // maxi=max(maxi,a[i]*(i+1));
        //}
      //  lli ans=sum-maxi;
      //  fuck=max(fuck,ans);
 //   } while(next_permutation(a.begin(),a.end())==true);
    cout<<fuck<<endl;
   }
    return 0;
}