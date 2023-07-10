#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli k,n;
     cin>>k>>n;
      vector<int> result;

    for (int i = 1; i <= n; ++i) {
        int d = 1;
        while (result.size() > k || (result.size() > 1 && equal(result.rbegin(), result.rbegin() + i, result.rend()))) {
            ++d;
        }
        result.push_back(d);
    }

    int digit_sum = 0;
    for (int digit : result) {
            cout<<digit;
        digit_sum += digit;
    }
    cout<<digit_sum<<endl;
    }

    return 0;

}
