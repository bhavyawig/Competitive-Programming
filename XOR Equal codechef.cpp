#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int test;
    cin>>test;
    for(int e=0;e<test;e++)
    {
        int n,x,k=0,p=0;
        cin>>n;    cin>>x;
        int a[n],arr[2*n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            arr[k]=a[i];
            k++;
            p=k;
        }
        for(int i=0;i<n;i++)
        {
            if(x!=0){
            arr[k]=a[i]^x;
            k++;
            p=k;
            }
        }
        int q=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+q);
        int max_count = 1, res = arr[0], count1 = 1,ini=0,fn=0;
    for (int i = 1; i < p; i++) {
        if (arr[i]==arr[i-1])
            count1++;
        else {
            if (count1>max_count) {
                max_count=count1;
                res=arr[i - 1];
            }
            count1=1;
        }
    }
    if (count1 > max_count)
    {
        max_count = count1;
        res = arr[p-1];
    }
   // cout<<res<<endl;
   for(int i=0;i<n;i++)
   {
       if(a[i]==res)
       {
           ini++;
       }
   }
   for(int i=0;i<p;i++)
   {
       if(arr[i]==res)
       {
           fn++;
       }
   }
   //cout<<"res"<<res<<endl;
   // cout<<"ini"<<ini<<endl;
   //  cout<<"fii"<<fn<<endl;
   cout<<fn<<" "<<fn-ini<<endl;
    }
    return 0;
}
