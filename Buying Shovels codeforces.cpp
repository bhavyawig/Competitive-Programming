    #include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,k;
       lli p=0,ans=1,z=0;
       cin>>n>>k;
       if(n<=k)
       {
           cout<<"1"<<endl;
       }
       else
       {
           for(lli i=2;i<=sqrt(n);i++)
           {
               if(n%i==0)
               {
                  // cout<<"here";
                   if(i<=k)
                       ans=max(ans,i);
                   if(n/i<=k)
                    ans=max(ans,n/i);
                   //p=max(i,n/i);
                   //ans=max(p,ans);
                   //z++;
               }
           }
         //  cout<<p<<" yeh h p"<<endl;
               cout<<n/ans<<endl;
       }
   }

    return 0;
}

