#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
  for(lli e=0;e<n;e++)
  {
    lli len;
    cin>>len;
    vector<lli> vec;
    lli maxi=INT_MIN;
    set<lli> s;
    for(lli i=0;i<len;i++)
    {
        lli a; cin>>a;
        s.insert(a);
        maxi=max(maxi,a);
        vec.push_back(a);
    }
    if(s.size()==1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        lli k=0;
        for(lli i=0;i<len;i++)
    {
        if(vec[i]==maxi)
        {
            k++;
        }
    }
    cout<<len-k<<" "<<k<<endl;
    for(lli i=0;i<len;i++)
    {
        if(vec[i]!=maxi)
        {
            cout<<vec[i]<<" ";
        }
    }
    cout<<endl;
     for(int i=0;i<k;i++)
    cout<<maxi<<" ";
    cout<<endl;
    }
  }
    return 0;
}