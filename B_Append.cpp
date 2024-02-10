#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli q;
   cin>>q;
   vector<int> ans;
   for(int e=0;e<q;e++)
   {
    lli type,op;
    cin>>type>>op;
    if(type==1)
    ans.push_back(op);
    else
    {
        int len=ans.size()-op;
        cout<<ans[len]<<endl;
    }
   }
}
