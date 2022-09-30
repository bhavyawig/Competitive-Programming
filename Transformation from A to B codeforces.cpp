#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli a,b;
   cin>>a>>b;
   vector<int> ans;
   ans.push_back(b);
   while(b>a)
   {
       lli no=b%10;
       if(no%2==0)
       {
           b=b/2;
           ans.push_back(b);
       }
       else if(no==1)
       {
           b=b/10;
           ans.push_back(b);
       }
       else
        break;
   }
   if(a==b)
   {
       cout<<"YES"<<endl;
       cout<<ans.size()<<endl;
       for(int i=ans.size()-1;i>=0;i--)
        cout<<ans[i]<<" ";
       cout<<endl;
   }
   else
    cout<<"NO"<<endl;

    return 0;
}


