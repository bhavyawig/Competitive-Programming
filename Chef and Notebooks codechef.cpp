#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int x,y,k,n,z=0;
        cin>>x;  cin>>y;  cin>>k;  cin>>n;
        int let=x-y;
        for(int i=0;i<n;i++)
        {
           int p,c;
           cin>>p; cin>>c;
           if(p>=let && c<=k)
           {
               z++;
           }
        }
        //cout<<z;
       if(z>=1)
       {
           cout<<"LuckyChef"<<endl;
       }
       else
       {
           cout<<"UnluckyChef"<<endl;
       }
    }
    return 0;
}

