
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,fcount=0;
    cin>>n;
    int a[n];
    if(n>=3)
    {
    for(int i=0;i<2*n;i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    for(int i=0;i<2*n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(int i=0;i<(2*n)-1;i++)
    {
        int count=0;
        for(int j=i+1;j<2*n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        fcount=fcount+(max-count);
    }
    if(fcount<3)
    {
        cout<<"NO";
    }
    else{
    cout<<"YES";}
    }
    else
    {
        cout<<"NO";
    }



    return 0;
}
