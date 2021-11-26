#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli a[n];
    lli smll=0,lrg=0;
    for(lli i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<"0"<<endl;
    }
    else{
    lli q=sizeof(a)/sizeof(a[0]);
    sort(a,a+q);
    bool flag=0;
    for(lli i=0;i<n;i++)
    {
        if(a[0]==a[n-1])
        {
            flag=1;
        }
        else if(a[i]==a[0])
        {
            smll++;
        }
        else if(a[i]==a[n-1])
        {
            lrg++;
        }
    }
    if(flag==0){
    cout<<n-2-(smll-1)-(lrg-1)<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    }

    return 0;
}

