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
       lli n,m;
       cin>>n>>m;
       lli mini=min(n,m);
       if(mini%2==0)
       {
           cout<<"Malvika"<<endl;
       }
       else
       {
           cout<<"Akshat"<<endl;
       }



    return 0;
}

