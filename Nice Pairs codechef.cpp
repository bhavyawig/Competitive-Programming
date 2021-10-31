#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,count=0;
        cin>>n;
        string a;
        cin>>a;
        for(lli i=1;i<n;i++)
        {
            lli s=1;
            for(lli j=i-1;j>=0 && s<=9;j--,s++)
            {
                lli diff=abs(a[j]-a[i]);
                if(i-j==diff)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

