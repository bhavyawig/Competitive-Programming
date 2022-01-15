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
       cin>>n>>k;
       if(n==1)
       {
           cout<<"1"<<endl;
       }
       else{
            int rep=log(k)/log(2);
       deque<int> d;
       for(int i=1;i<=n;i++)
       {
           d.push_back(i);
       }
       lli num=0;
       for(int i=1;i<=rep;i++)
       {
           if((n-i)%rep==0)
            num=i;
       }
       lli keep=0;
       for(int i=0;i<num;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(j%2==0)
               {
                   keep=d[j];
                   d.erase(d.begin()+j);
                   d.push_front(keep);

               }
               else
               {
                   keep=d[j];
                   d.erase(d.begin()+j);
                    d.push_back(keep);
               }
           }
       }
       for(auto &it: d)
       {
           cout<<it<<" ";
       }
       cout<<endl;
       }
   }

    return 0;
}

