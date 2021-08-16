#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int j,sumx=0,sumy=0,sumz=0;
        int x[n],y[n],z[n];
        for(j=0;j<n;j++)
        {
            cin>>x[j]>>y[j]>>z[j];
        }
        for(j=0;j<n;j++)
        {
            sumx=sumx+x[j];
            sumy=sumy+y[j];
            sumz=sumz+z[j];
        }
        if(sumx==0 && sumy==0 && sumz==0)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }


    return 0;
}
