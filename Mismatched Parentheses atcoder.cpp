#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   string s;
   cin>>s;
   stack<lli> st;
  // vector<vector<lli>> pr;
   vector<int> vis(n,0);
   int k=1;
   for(lli i=0;i<n;i++)
   {
      if(s[i]=='(') st.push(i);
      else if(s[i]==')' && st.empty()==false)
      {
          vis[st.top()]=k;
          st.pop();
          vis[i]=k;
          k++;
      }
   }
   int ans=0;
   for(int i=0;i<n;i++)
   {
       if(vis[i]>0 && ans==0) ans=vis[i];
       else if(vis[i]==ans) ans=0;
       else if(ans>0 && vis[i]!=ans) vis[i]=ans;

   }
  // for(int i=0;i<n;i++) cout<<vis[i]<<" ";
   for(int i=0;i<n;i++)
   {
       if(vis[i]==0) cout<<s[i];
   }
   /* vector<vector<lli>> ans;
        sort(pr.begin(),pr.end());
        for(lli i=0;i<pr.size();i++)
        {
            if(ans.size()==0 || ans[ans.size()-1][1]<pr[i][0])
            {
                vector<lli> temp1;
                temp1.push_back(pr[i][0]);
                temp1.push_back(pr[i][1]);
                ans.push_back(temp1);
            }
            else
            {
                ans[ans.size()-1][1]=max( ans[ans.size()-1][1],pr[i][1]);
            }
        }
        for(lli i=0;i<ans.size();i++)
        {
            lli strt=ans[i][0];
            lli endd=ans[i][1];
            s.erase(strt,endd-strt+1);
        }
        cout<<s<<endl;
*/

    return 0;

}
