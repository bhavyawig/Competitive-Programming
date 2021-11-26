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
       lli p=0;
       cin>>n>>k;
       if(n<=k)
       {
           cout<<"1"<<endl;
       }
       else
       {
           for(lli i=2;i<=sqrt(k);i++)
           {
               if(n%i==0)
               {
                   p=i;
               }
           }
           if(p==0)
           {
               cout<<n<<endl;
           }
           else
           {
               cout<<n/p<<endl;
           }
       }
   }

    return 0;
}

