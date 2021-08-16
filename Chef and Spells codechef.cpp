
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int N,D,H;
        int ans=0,z=0;
        cin>>N;cin>>D,cin>>H;
        int a[N];
        for(int j=0;j<N;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<N;j++)
        {
           if(a[j]>0)
           {
               ans=ans+a[j];
               if(ans>H && z==0)
               {
                   cout<<"YES"<<endl;
                   z++;
               }
           }
           if(a[j]==0)
           {
               if(ans<D)
               {
                   ans=0;
                   if(ans>H && z==0)
               {
                   cout<<"YES"<<endl;
                   z++;
               }
               }
               else
               {
                   ans=ans-D;
                   if(ans>H && z==0)
               {
                   cout<<"YES"<<endl;
                   z++;
               }
               }
           }
        }
        if(z==0){
        cout<<"NO"<<endl;}
    }
    return 0;
}
