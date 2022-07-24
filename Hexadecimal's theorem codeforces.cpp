#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   if(n==0)
    cout<<"0 0 0";
   else if(n==1)
    cout<<"0 0 1";
   else if(n==2)
    cout<<"1 1 0";
   else {
    double val=n / ((1 + sqrt(5)) / 2.0);
    //double val3=round(val);
    cout<<setprecision(0)<<fixed<<round(val)<<" ";
    double val2=n-round(val);
    cout<<val2<<" 0";
   }

    return 0;
}

