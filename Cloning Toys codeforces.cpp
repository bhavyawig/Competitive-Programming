#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli cpy,org;
   cin>>cpy>>org;
   if(org==0)
    cout<<"No";
   else if(org==1 && cpy==0)
    cout<<"Yes";
   else if(org==1 && cpy!=0)
    cout<<"No";
   else{
   org--;
   lli copies=org;
   if(copies>=1)
   {
       lli left=cpy-copies;
       if(left<0)
        cout<<"No";
       else if(left==0)
        cout<<"Yes";
       else
       {
           if(left%2==0)
            cout<<"Yes";
           else
            cout<<"No";
       }
   }
   }

    return 0;
}


