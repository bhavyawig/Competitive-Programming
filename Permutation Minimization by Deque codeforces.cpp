#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n;
        cin>>n;
        lli a[n];
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
        }
            deque <int> g;
            g.push_front(a[0]);
         for(lli i=1;i<n;i++)
        {
            if(a[i]>=*g.cbegin())
            {
                g.push_back(a[i]);
            }
            else
            {
                g.push_front(a[i]);
            }
        }
        for (auto it = g.begin(); it != g.end(); ++it){
        cout <<*it<<" ";
        }

        cout<<endl;
    }

    return 0;
}

