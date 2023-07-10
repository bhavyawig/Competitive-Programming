#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       string a;
       cin>>a;
       vector<int> vec;  // 010110 -> 1,3,4
       for(lli i=0;i<n;i++)
       {
           if(a[i]=='1')
            vec.push_back(i);
       }
       lli count=0;
       for(lli i=1;i<vec.size();i++)
       {
           lli ans=vec[i]-vec[i-1]-1;
           if(ans%2==0)
            count++;
       }
       if(count==0)
        cout<<"2"<<endl;
       else
        cout<<"1"<<endl;
   }

    return 0;
}


