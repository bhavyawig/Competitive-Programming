#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   if(n%5==0) cout<<n<<endl;
   else{
   lli temp1=n,temp2=n;
   for(lli i=n;i>=0;i--)
   {
       if(i%5==0)
       {
           temp1=i;
           break;
       }
   }
   for(lli i=n;i<=100;i++)
   {
       if(i%5==0)
       {
           temp2=i;
           break;
       }
   }
   lli dist1=abs(n-temp1);
   lli dist2=abs(temp2-n);
    if(dist1<dist2) cout<<temp1<<end;
    else cout<<temp2<<endl;
   }
    return 0;

}
