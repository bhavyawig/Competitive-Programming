#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);

   v.insert(v.begin()+,100);

 for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

       cout<<endl;

        v.erase(v.begin()+1);

    for (auto it = v.begin(); it != v.end(); it++)
     cout << *it << " ";

    return 0;
}

