#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,p,q,sum;
    int a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                p=i;
                q=j;
            }
        }
    }
     if(p>=2)
     {
         p=p-2;
     }
     else{
        p=2-p;}
        if(q>=2)
     {
         q=q-2;
     }
     else{
        q=2-q;}
        sum=p+q;
        cout<<sum;

    return 0;
}
