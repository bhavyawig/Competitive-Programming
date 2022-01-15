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
   lli n;
   cin>>n;
   lli c=n%10;
   n=n/10;
   lli b=n%10;
   n=n/10;
   lli a=n;
   lli f=(a*100)+(b*10)+c;
   lli f1=(b*100)+(c*10)+a;
   lli f2=(c*100)+(a*10)+b;
   lli ans=f+f1+f2;
   cout<<ans<<endl;


    return 0;
}

