#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,count=0,last,k=1,e=0,q=0;
        cin>>n;
        int p=n,arr[10000];
        for(int j=0;j<10000;j++)
        {
            arr[j]=0;
        }
        while(n>0)
        {
            last=n%10;
            m=last*k;
            if(m!=0){
            arr[e]=m;e++;count++;q=e;}
            n=n/10;
            k=k*10;
        }
        cout<<count<<endl;
        for(int j=0;j<=q;j++)
        {
            if(arr[j]!=0){
            cout<<arr[j]<<" ";}
        }
        cout<<endl;
        for(int j=0;j<10000;j++)
        {
            arr[j]=0;
        }
    }
    return 0;
}


