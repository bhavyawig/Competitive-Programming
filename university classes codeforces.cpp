#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli count=0,ne=0;
   char arr[n][7];
   for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<7;j++)
       {
           cin>>arr[i][j];
       }
      // cin>>arr[i][0]>>arr[i][1]>>arr[i][2]>>arr[i][3]>>arr[i][4]>>arr[i][5]>>arr[i][6];
    }
    lli w[7],k=0,p=0;
    for(lli i=0;i<7;i++)
    {
        count=0;
        for(lli j=0;j<n;j++)
        {
            if(arr[j][i]=='1')
            {
                count++;
            }
        }
        w[k]=count;
        k++;
        p=k;
    }
    lli max=w[0];
    for(lli i=0;i<p;i++)
    {
        if(max<w[i])
        {
            max=w[i];
        }
    }
    cout<<max<<endl;

    return 0;
}
