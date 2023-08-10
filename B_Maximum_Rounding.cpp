#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++){
   string n;
   cin>>n;
  lli fuc=0;
  reverse(n.begin(),n.end());
  n+='0';
 //cout<<n<<endl;
  for(lli i=0;i<n.length();i++)
  {
    if(n[i]>='5')
    {
        n[i+1]=n[i+1]+1;
        //cout<<i<<endl;
        for(lli u=i;u>=fuc;u--)
        {
           // cout<<u<<endl;
            n[u]='0';
           //cout<<n<<endl;
        }
        //cout<<n<<endl;
        fuc=i;
    }
  }
   reverse(n.begin(),n.end());
   if(n[0]=='0')
   {
    for(int i=1;i<n.length();i++)
    cout<<n[i];
    cout<<endl;
   }
   else
   {
    //cout<<"j";
    for(int i=0;i<n.length();i++)
    cout<<n[i];
    cout<<endl;
   }
    }
    return 0;
}