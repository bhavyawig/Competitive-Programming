#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int n=s.length();
    int a[n],i,p=0;
    for(i=0;i<n;i=i+2)
    {
        a[p]=s[i];
        p++;
    }
    int q=sizeof(a)/sizeof(a[0]);
    sort(a,a+q);
    for(i=0;i<p;i++)
    {
        cout<<a[i];
        cout<<endl;
    }
    for(int i=0;i<p-1;i++)
    {
       // cout<<a[i]<<"+";
    }
    //cout<<a[p-1];

    return 0;
}
