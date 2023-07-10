#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli n;
     cin>>n;
     vector<int> ans;
     if(n==1)
        cout<<"1"<<endl;
     else if(n%2==1)
        cout<<"-1"<<endl;
     else{
     ans.push_back(n);
     ans.push_back(n-1);
     for(int i=2;i<=n-2;i=i+2)
     {
         ans.push_back(i);
         int left=n-1-i;
         ans.push_back(left);
     }
     for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
     cout<<endl;
     }
    }

    return 0;

}
