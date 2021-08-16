
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    set<int> s;
    for(int i=0;i<n-1;i++)
    {
        s.insert(a[i]);
    }
     for(int i=1;i<=n;i++)
    {
        if(s.find(i)==s.end())
        {
           cout<<i<<endl;
        }
    }

    return 0;
}
