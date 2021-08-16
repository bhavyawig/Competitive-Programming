#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,sum=0,q,j=1,cpyj,val=0,z=1,r;
        cin>>n;
        sum=(n(n+1))/2;
        if(sum%2==0)
        {
            cout<<"YES"<<endl;
            int p=sum/2;
            while(p>val)
            {
                val=val+j;
                j++;
                cpyj=j;
            }
            q=val-p;
            int arr[cpyj],arr2[n-cpyj];
            for(int i=1;i<=cpyj;i++)
            {
                if(i!=q)
                {
                    arr[i]=i;
                }
            }
            arr2[0]=q;
            for(int i=cpyj+1;i<=n;i++)
            {
                arr2[z]=i;
                z++;
                r=z;
            }
            cout<<sizeof(arr)/sizeof(arr[0])<<endl;
            for(int i=1;i<=cpyj;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            cout<<sizeof(arr2)/sizeof(arr2[0])<<endl;
            for(int i=0;i<=r;i++)
            {
                 cout<<arr[i]<<" ";
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
