#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0,i,swap,c,d;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,j;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (a[d] > a[d+1])
      {
	swap       = a[d];
	a[d]   = a[d+1];
	a[d+1] = swap;
      }
    }
  }
  for(j=0;j<n;j++)
  {
      if(a[j]==a[0])
      {
          count++;
      }
  }


        cout<<n-count<<endl;

        count=0;


    }
   return 0;
}
