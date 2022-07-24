#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli a[n];
    lli neg=0,cnt=0,no=0;
    vector<lli> v;
    for(lli i=0; i<n; i++)
        cin>>a[i];

    for(lli i=0; i<n; i++)
    {
        if(a[i]<0 && neg<2)
        {
            neg++;
            no++;
        }
        else if(a[i]<0 && neg==2)
        {
            neg=0;
            cnt++;
            v.push_back(no);
            no=1;
            neg++;
        }
        else
            no++;

    }
    if(neg<=2)
    {
        neg=0;
        cnt++;
        v.push_back(no);
        no=0;
    }
    cout<<cnt<<endl;
    for(lli i=0; i<v.size(); i++)
        cout<<v[i]<<" ";

    return 0;
}


