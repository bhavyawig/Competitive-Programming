#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   long long unsigned int b;
   cin>>b;
   int c=0;
   for(int i=1;i<=20;i++)
   {
    long long unsigned int uu=1;
    for(int j=0;j<i;j++)
    uu=uu*i;
    if(uu==b)
    {
        //cout<<"oo";
        cout<<i<<endl;
        c++;
        break;
    }
   }
   if(c==0)
   cout<<"-1"<<endl;
}