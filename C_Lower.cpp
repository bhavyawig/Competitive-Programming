#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli h[n];
    for(int i=0;i<n;i++)
    cin>>h[i];

     lli last=0,save=0,now=0;
     for(int i=0;i<n;i++)
     {
       if(h[i]<=last)
       now++;
       else
       now=0;
       save=max(save,now);
       last=h[i];
     }
     cout<<save;
}