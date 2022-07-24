#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,m;
    cin>>n>>m;
    lli mini=0,maxi=0;
    vector<lli> v;
    if(n<=m)
    {
        mini=n;
        maxi=m;
    }
    else
    {
        mini=m;
        maxi=n;
    }
    lli k=1;
    for(lli i=1; i<=maxi; i++)
    {
        if(maxi==n)
        {

            v.push_back(i);
            v.push_back(1);
        }
        else
        {

            v.push_back(1);
            v.push_back(i);
        }
    }
    if(mini>=2)
    {
        for(lli i=2; i<=mini; i++)
        {
            if(mini==m)
            {
                v.push_back(1);
                v.push_back(i);
            }
            else
            {

                v.push_back(i);
                v.push_back(1);
            }
        }
    }
    cout<<v.size()/2<<endl;
    for(lli i=0; i<v.size(); i=i+2)
    {
        cout<<v[i]<<" "<<v[i+1]<<endl;
    }



    return 0;
}


