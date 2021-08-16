

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    double  s1=0;
    for(i=0;i<n;i++)
    {
        s1=s1+(a[i]*0.01);


    }
    cout<<(s1/n)*100;
    return 0;

}
