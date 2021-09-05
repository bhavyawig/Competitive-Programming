#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,k,s,sum=0;
        cin>>n;  cin>>k;  cin>>s;
        for(int i=1;i<2*n;i=i+2)
        {
            sum=sum+i;
        }
        int ans=s-sum;
        k=k-1;
        cout<<ans/k<<endl;
    }
    return 0;
}


