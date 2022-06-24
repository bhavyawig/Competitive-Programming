#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,a;
   cin>>n>>a;
   vector<lli> x;
   for(lli i=0;i<n;i++)
    {
        lli samp;
        cin>>samp;
        x.push_back(samp);
    }
    if(n==1)
        cout<<0<<endl;
    else{
   sort(x.begin(),x.end());
   lli ans1=(x[n-2]-x[0])+min(abs(a-x[0]),abs(a-x[n-2]));
   lli ans2=(x[n-1]-x[1])+min(abs(a-x[1]),abs(a-x[n-1]));
   cout<<min(ans1,ans2)<<endl;
    }
    return 0;
}

