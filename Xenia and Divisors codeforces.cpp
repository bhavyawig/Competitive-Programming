#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a;
   cin>>n;
   vector<int>v1;
   for(int i=0;i<n;i++)
   {
        cin>>a;
      v1.push_back(a);

   }
    sort(v1.begin(), v1.end());
    if (binary_search(v1.begin(), v1.end(), 1,2,4))
       cout << "1 2 4";
       if (binary_search(v1.begin(), v1.end(), 1,2,6))
       cout << "1 2 6";
       if (binary_search(v1.begin(), v1.end(), 1,3,6))
       cout << "1 3 6";
       else{
        cout<<"-1";
       }

    return 0;
}

