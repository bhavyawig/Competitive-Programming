#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   vector<int> v1;
   v1.push_back(1);
   v1.push_back(2);
   v1.push_back(3);
   v1.push_back(4);

   for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

        cout<<endl;
    for (auto it = v1.begin(); it != v1.end(); it++)
        cout << *it << " ";

       cout<<endl;
    cout<<v1.size()<<endl;
    v1.pop_back();
    cout<<v1.size()<<endl;


  for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    return 0;
}

