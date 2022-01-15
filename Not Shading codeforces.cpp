#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

vector<lli> input(vector<lli> inputvector,lli endlimit)
{
    for(lli i=0;i<endlimit;i++)
    {
        lli samplenumber;
        cin>>samplenumber;
        inputvector.push_back(samplenumber);
    }
    return inputvector;
}

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,m,r,c;
       cin>>n>>m>>r>>c;
       char a[n][m];
       lli count=0,cnt=0;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               cin>>a[i][j];
           }
       }
       if(a[r-1][c-1]=='B')
       {
           cout<<"0"<<endl;
       }
       else
       {
           for(int i=0;i<n;i++)
           {
               if(a[i][c-1]=='B')
               {
                   count++;
               }
           }
           for(int i=0;i<m;i++)
           {
               if(a[r-1][i]=='B')
               {
                   count++;
               }
           }
           if(count>=1)
           {
               cout<<"1"<<endl;
           }
           else{
            for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(a[i][j]=='B')
                cnt++;
           }
       }
       if(cnt==0)
       {
           cout<<"-1"<<endl;
       }
       else
       {
           cout<<"2"<<endl;
       }

           }


       }
   }

    return 0;
}

