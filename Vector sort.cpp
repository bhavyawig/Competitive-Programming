#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   vector<int> v;
   v.push_back(4);
   v.push_back(8);
   v.push_back(3);

   for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout<<endl;
   sort(v.begin(),v.end());
   // O(nlogn)

   for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";


    return 0;
}
