#include<bits/stdc++.h>
using namespace std;

int main() {
   int test;
   cin>>test;
   for(int e=0;e<test;e++){
        int n,b;
   cin>>n>>b;
   vector<int> nums;
   for(int i=0;i<n;i++)
   {
       int temp; cin>>temp;
       nums.push_back(temp);
   }

  int val=-1;
  for(int i=0;i<n;i++)
  {
      if((nums[i]&b)==b) val&=nums[i];
  }
    if (cur ==b) {
        cout<<"YES"<<endl;
    } else {
        cout <<"NO"<<endl;
    }
   }

    return 0;
}

