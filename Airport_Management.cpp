#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;



int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n;
        cin>>n;
        lli arrival[n],depart[n];
        for(lli i=0;i<n;i++)
        {
            cin>>arrival[i];
        }
          for(lli i=0;i<n;i++)
        {
            cin>>depart[i];
        }
         lli count = 0, maxPlatforms=0;
    lli maxDepartureTime = depart[0];
   // cout<<depart[0];
    for (lli i = 1; i < n; i++) {
        maxDepartureTime = max(maxDepartureTime, depart[i]);
    }
    //cout<<maxDepartureTime;
    vector<lli> v(maxDepartureTime + 2, 0);
    for (lli i = 0; i < n; i++) {
        v[arrival[i]]++;
        v[depart[i]]++;
    }
    for (lli i = 0; i <= maxDepartureTime ; i++) {
        maxPlatforms = max(maxPlatforms, v[i]);
    }
    cout<<maxPlatforms<<endl;
    }
    return 0;
}