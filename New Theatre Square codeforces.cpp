#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        lli n,m,x,y,cntsingle=0,cntdouble=0;
        cin>>n;  cin>>m;  cin>>x;  cin>>y;
          string a;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
            cin>>a[j];
             if(a[j]=='.')
            {
                cntsingle++;
            }
            }
        }
        if(cntsingle%2==0)
        {
           singans=cntsingle*x;
           dobans=cntsingle*y;
        }
        else
        {

        }
    }
    return 0;
}


