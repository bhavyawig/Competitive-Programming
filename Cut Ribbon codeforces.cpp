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
   lli n,a,b,c;
   cin>>n>>a>>b>>c;
   lli ss=INT_MIN;
   lli z=0;
   for(lli x=0;x<=n/a;x++)
   {
       for(lli y=0;y<=(n-(a*x))/b;y++)
       {
           if((n-(b*y)-(a*x))%c==0){
           z=(n-(b*y)-(a*x))/c;

           lli ans=x+y+z;
            ss=max(ss,ans);}
       }
   }
   cout<<ss<<endl;

    return 0;
}

