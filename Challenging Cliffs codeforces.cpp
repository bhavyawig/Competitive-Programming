#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    for(int j=0;j<t;j++)
    {
        int n,x,z;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        min=v.at(1)-v.at(0);
         for(int i=0;i<n;i++)
        {
            int p=v.at(i);
            int q=v.at(i+1);
            if(min>q-p)
            {
                min=p-q;
                z=i;
            }
        }
        int new1[n];
        new1[0]=v.at(z);
        v.erase(new1[0]);

    }

    return 0;
}

