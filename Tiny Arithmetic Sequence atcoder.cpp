#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    int i,c,d,swap;
    for(i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    for (c = 0 ; c < 2; c++)
  {
    for (d = 0 ; d < 2-c; d++)
    {
      if (arr[d] > arr[d+1])
      {
	swap       = arr[d];
	arr[d]   = arr[d+1];
	arr[d+1] = swap;
      }
    }
  }
  if((arr[2]-arr[1])==(arr[1]-arr[0]))
  {
      cout<<"Yes";
  }
  else
  {
      cout<<"No";
  }
  return 0;

}
