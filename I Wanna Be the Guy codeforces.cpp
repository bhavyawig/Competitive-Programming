#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,i;
    cin>>n;
    cin>>p;
    int a[p];
    for(i=0;i<p;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    int s[q];
    for(i=0;i<q;i++)
    {
        cin>>s[i];
    }
       int new1[n];
     for(i=0;i<n;i++)
    {
        new1[i]=0;
    }
    for(i=0;i<n;i++)
    {
        new1[w[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(new1[i]==0)
          {
            cout<<"Oh, my keyboard!";
            exit(0);
        }
    }
    cout<<"I become the guy.";


    return 0;
}
