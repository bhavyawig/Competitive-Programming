#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   vector<int> v;
   vector<int> v2;
   v.push_back(1);
   v.push_back(2);

   v2.push_back(3);
   v2.push_back(4);
   v2.push_back(5);

   if(v<v2)
   {
       // It compares size
     cout<<"v1 is smaller than v2"<<endl;
   }
   else
   {
       cout<<"not smaller"<<endl;
   }

    return 0;
}

