#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   lli cnt=0,ok=0;
   if(m%n!=0)
    cout<<-1<<endl;
   else
   {
       lli ans=m/n;
       lli cnt=0;
       while(ans>1)
       {
           if(ans%2==0)
            ans=ans/2;
           else if(ans%3==0)
            ans=ans/3;
            else
            {
                ans=INT_MAX;
                break;
            }
            cnt++;
       }
       if(ans!=1)
        cout<<-1<<endl;
       else
        cout<<cnt<<endl;
   }
    return 0;
}


