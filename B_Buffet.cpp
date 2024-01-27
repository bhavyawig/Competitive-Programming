#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
     lli b[n];
    for(int i=0;i<n;i++)
    cin>>b[i];
     lli c[n-1];
    for(int i=0;i<n-1;i++)
    cin>>c[i];

    lli sum=0,prev=-1;
    for(int i=0;i<n;i++)
    {
        int no=a[i]-1;
        sum+=b[no];

        if(i!=0 && prev+1==a[i])
        {
            sum+=c[prev-1];
        }
        prev=a[i];
    }
    cout<<sum<<endl;
}