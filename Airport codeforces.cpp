
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int q=sizeof(a)/sizeof(a[0]);
    sort(a,a+q);



    return 0;
}
