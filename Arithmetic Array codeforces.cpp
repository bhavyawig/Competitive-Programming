
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,sum=0,count=0;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            sum=sum+a[j];
        }
       if(sum<n)
       {
           cout<<"1"<<endl;
       }
       if(sum==n)
       {
           cout<<"0"<<endl;
       }
       if(sum>n)
       {
           cout<<sum-n<<endl;
       }


    }

    return 0;
}
