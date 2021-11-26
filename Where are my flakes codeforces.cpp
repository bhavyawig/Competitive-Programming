#include<bits/stdc++.h>
using namespace std;
typedef long long int lli ;

int main()
{
    lli n,m;
    cin>>n>>m;
    lli a[n];
    lli count=0;
    for(lli i=0;i<n;i++)
    {
        a[i]=1;
    }
    for(lli i=0;i<m;i++)
    {
        string t,th,dire,of,no;
        cin>>t>>th>>dire>>of>>no;
        lli no1=stoi(no);
        if(dire[0]=='l')
        {
            // 1   2
            for(lli j=no1-1;j<n;j++)
            {
                a[j]=-1;
            }
        }
        else
        {
            // 1 2 3
            // right of 1,2
                // 1 2 3 4 5 6
            for(lli j=0;j<no1;j++)
            {
                a[j]=-1;

            }
        }

    }
    for(lli i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
    cout<<count<<endl;
    }

    return 0;
}
