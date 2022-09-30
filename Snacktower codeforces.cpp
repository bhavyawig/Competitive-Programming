#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   stack<lli> s;
   lli  vis[n+1]={0};
   for(lli i=0;i<n;i++)
    cin>>a[i];
    for(lli i=0;i<n;i++)
    {
        if(a[i]==n)
        {
            s.push(a[i]);
            while(s.size()>0)
            {
                lli c=s.top();
            cout<<c<<" ";
            s.pop();
            }
            cout<<endl;
            vis[a[i]]=1;
        }
        else if(vis[a[i]+1]==1)
        {
            vis[a[i]]=1;
            s.push(a[i]);
            while(s.size()>0)
            {
                lli c=s.top();
            cout<<c<<" ";
            s.pop();
            }
            cout<<endl;
        }
        else
        {
            //cout<<"yahan";
            vis[a[i]]=1;
            s.push(a[i]);
            cout<<endl;
        }
    }
    return 0;
}


