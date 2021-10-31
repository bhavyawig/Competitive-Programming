//                MAPS
//       Maps are associative containers that store elements in a mapped fashion.
//       Each element has a key value and a mapped value.
//       No two mapped values can have same key values.

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   map<int, int> m;

   m.insert(pair<int, int>(1, 10));
   m.insert(pair<int, int>(2, 20));
   m.insert(pair<int, int>(3, 30));
   m.insert(pair<int, int>(4, 40));

    for (auto itr = m.begin(); itr != m.end(); ++itr) {
        cout  << itr->first << " " << itr->second << '\n';
    }


    return 0;
}

