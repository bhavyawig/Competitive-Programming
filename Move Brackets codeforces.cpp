#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++){
    int n,count=0,ans=0,p=0;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]=='(')
        {
            count++;
        }
        if(a[i]==')' && count>p)
        {
            p++;
        }
        else if(a[i]==')' && count<=p)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}


