#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,k,bill,sum=0;
    cin>>n>>k;
    int i,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>bill;
     for(i=0;i<n;i++)
    {
       sum=sum+a[i];
    }
    sum=sum-a[k];
    sum=sum/2;
    if(bill>sum)
    {
        cout<<bill-sum;
    }
    else{
         cout<<"Bon Appetit";
    }
    return 0;

}
