#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  vector<int> vec;
  for(int i=0;i<8;i++)
  {
      int temp;
      cin>>temp;
      vec.push_back(temp);
  }
  int no=0;
  for(int i=0;i<8;i++)
  {
      if(vec[i]>=100 && vec[i]<=675 && vec[i]%25==0)
        continue;
      else
        no++;
  }
  for(int i=1;i<8;i++)
  {
      if(vec[i]>=vec[i-1])
        continue;
      else
        no++;
  }
  if(no>=1) cout<<"No"<<endl;
  else
    cout<<"Yes"<<endl;

    return 0;

}
