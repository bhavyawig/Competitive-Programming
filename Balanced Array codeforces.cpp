#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,k=2,l=1;
        cin>>n;
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n/2;i++)
            {
                cout<<k<<" ";
                k=k+2;
            }
            for(int i=n/2;i<n;i++)
            {
                if(i==n-1)
                {
                  l=l+(n/2);
                  cout<<l<<" ";
                }
                else{
                cout<<l<<" ";}
                l=l+2;
            }
            cout<<endl;
        }
    }
    return 0;
}
