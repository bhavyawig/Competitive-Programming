#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
       cout<< i + 1<<" ";
        for (int j = 1; j < n; ++j)
        {
            cout<<n * j + (i + j) % n + 1<<" ";
        }
       cout<<endl;
    }
    return 0;
}


