#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli y=0;y<t;y++){
   lli n;
   cin>>n;
   lli a[n],b[n];
   for(lli i=0;i<n;i++)
   {
    cin>>a[i];
    b[i]=a[i];
   }
   sort(b,b+n);
   int oh=0;
   for(lli i=n-1;i>=0;i--)
   {
    if(a[i]!=b[i] && oh==0){
    cout<<max(a[i],b[i])<<endl;
    oh++;
   }
   }
   if(oh==0)
   cout<<"0"<<endl;
    }
    return 0;
}