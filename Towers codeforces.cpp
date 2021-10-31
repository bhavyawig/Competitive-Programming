#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    set<int> s;
    int a[n],freq[1001];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    for(int i=0;i<1001;i++)
    {
        freq[i]=0;
    }
     for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    int ax=freq[0];
    for(int i=0;i<1001;i++)
    {
        if(ax<freq[i])
        {
            ax=freq[i];
        }
    }
    cout<<ax<<" "<<s.size()<<endl;
    return 0;
}


