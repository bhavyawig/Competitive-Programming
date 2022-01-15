#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  lli n;
  cin>>n;
  if(n<9)
  {
      cout<<"AGC00"<<n<<endl;
  }
  else if(n>9 && n<42)
  {
    cout<<"AGC0"<<n<<endl;
  }
  else
  {
      cout<<"AGC0"<<n+1<<endl;
  }

    return 0;
}

