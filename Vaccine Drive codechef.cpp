#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,p,sum=0;
    cin>>t;
    int i,x[10],v,j,k;
    float n;
    for(i=0;i<t;i++)
    {
        cin>>g;
        cin>>p;
        for(j=0;j<10;j++)
        {
            cin>>x[i];
        }

        for(k=g-1;k<=9;k++)
        {
            sum=sum+x[k];
        }
        cout<<sum;
         n=sum/p;
        if(sum%p==0)
        {
           cout<<n<<" "<<n;
        }
        else if(sum%p!=0)
        {
            cout<<int (n)<<" "<<int (n+1);
        }

   sum=0;


    }
    return 0;
}
