#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,k;
   cin>>n>>k;
   lli a[n];
   for(lli i=0;i<n;i++)
    cin>>a[i];
    lli temp=0,cnt=0;
   for(lli i=0;i<n;i++)
   {
       if(a[i]>=8 && temp<k)
       {
           a[i+1]=a[i+1]+(a[i]-8);
           temp+=8;
           cnt++;
       }
       else if(a[i]<8 && temp<k)
       {
           temp+=a[i];
           cnt++;
       }
   }
   if(temp>=k)
    cout<<cnt<<endl;
   else
    cout<<-1;
    return 0;
}

