#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    set<lli> s;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            for(int k=0;k<=n;k++)
            {
                if(i+j+k<=n)
                {
                    // lli no = i * (n + 1) * (n + 1) + j * (n + 1) + k;
                   cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }
    }
    // for(auto itr:s)
    // {
    //     lli uf=itr;
    //     lli last=uf%10; uf=uf/10;
    //     lli sec=uf%10; uf=uf/10;
    //     cout<<uf<<" "<<sec<<" "<<last<<endl;
    // }
}