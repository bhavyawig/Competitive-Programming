#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,d,swap,data;
    cin>>n;
    string name[n];
    unsigned long long int no[n],copy[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>name[i]>>no[i];
    }
    for(i=0;i<n;i++)
    {
        copy[i]=no[i];
    }
     for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (no[d] > no[d+1]) /* For decreasing order use < */
      {
	swap       = no[d];
	no[d]   = no[d+1];
	no[d+1] = swap;
      }
    }
  }
  for(i=0;i<n;i++)
  {
      if(no[n-2]==copy[i])
      {
          data=i;
      }

  }
  cout<<name[data];
  return 0;



}
