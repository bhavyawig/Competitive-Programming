#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  lli n;
  cin>>n;
  lli a[n];
  for(lli i=0;i<n;i++)
  {
      cin>>a[i];
  }
  lli left=0,right=n-1;
  while(left<=right)
  {
      if(a[left]>0 && a[right]>0)
      {
          right--;
      }
      if(a[left]>0 && a[right]<0)
      {
          swap(a[left],a[right]);
          left++;
          right--;
      }
      if(a[left]<0 && a[right]>0)
      {
          right--;
          left++;
      }

  }
  for(lli i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }


    return 0;
}

