#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,p,k,count=0;
        cin>>n;cin>>p;cin>>k;
        int no=p%k;
        int z=no;
        no--;
        while(no>=0){
        for(int j=0;j<=n-1;j++)
        {
            if(j%k==no)
            {
                count++;
            }
        }
        no--;
        }
        for(int j=0;j<=n-1;j++)
        {
            if(j%k==z && j<=p)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

