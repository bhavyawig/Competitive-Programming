#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli c1,c2,c3,c4,c5;
   cin>>c1>>c2>>c3>>c4>>c5;
   lli sum=c1+c2+c3+c4+c5;
   if(sum%5==0 && sum!=0)
    cout<<sum/5<<endl;
   else
    cout<<-1<<endl;

    return 0;
}


