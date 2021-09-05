#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n; cin>>m;
    for(int i=0;i<n;i++)
    {
       if(i==0 || i%2==0)
       {
           for(int j=0;j<m;j++)
           {
               cout<<"#";
           }
           cout<<endl;
       }
       else if((i-1)%4==0)
       {
            for(int j=0;j<m-1;j++)
           {
               cout<<".";
           }
           cout<<"#"<<endl;
       }
       else if((i-3)%4==0)
       {
            cout<<"#";
            for(int j=0;j<m-1;j++)
           {
               cout<<".";
           }
           cout<<endl;
       }
    }
    return 0;
}

