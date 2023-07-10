#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   vector<lli> vec;
   vec.push_back(1);
   int j=1,check=0;
   for(int i=0;i<2*n;i++)
   {
       int val=vec[vec.size()-1];
       vec.push_back(val+j);
       if(j==n)
       {
           check++;
       }
       if(check==1)
        j--;
       else
       j++;
   }
   lli q;
   cin>>q;
   for(int e=0;e<q;e++)
   {
       lli x;
       cin>>x;
       for(int j=0;j<vec.size()-1;j++)
       {
           if(x==vec[j])
            cout<<j+1<<endl;
           else if(vec[j]<x && vec[j+1]>x)
            cout<<j+1<<endl;
       }
       if(vec[vec.size()-1]==x) cout<<vec.size()<<endl;
   }

    return 0;

}
