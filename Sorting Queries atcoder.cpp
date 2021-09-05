#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli q;
    cin>>q;
    lli arr[q],newe[q],re=0,k=0,x=0,r=0;
    for(int i=0;i<q;i++)
    {
        int l,t=0;
        cin>>l;
        if(l==1)
        {
            lli p;
            cin>>p;
            arr[k]=p;
            k++;
            x=k;
            //cout<<arr[2];
        }
        else if(l==3)
        {
            int e=sizeof(arr)/sizeof(arr[0]);
            sort(arr,arr+e);
            for(int i=0;i<x;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        else if(l==2)
        {
            for(int i=0;i<x;i++)
            {
                if(arr[i]!=-1 && t==0)
                {
                    newe[r]=arr[i];
                    //cout<<"1 lement"<<arr[i]<<endl;
                    r++;
                    re=r;
                    arr[i]=-1;
                    t++;
                }
            }
        }
    }
    for(int i=0;i<re;i++)
    {
       cout<<newe[i]<<endl;
    }
    return 0;
}


