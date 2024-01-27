#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli n;
        cin>>n;
        string ini,fin;
        cin>>ini>>fin;
        lli onetozero=0,zerotoone=0;
         for(int i=0;i<n;i++)
        {
            if(ini[i]=='1' && fin[i]=='0') onetozero++;
             if(ini[i]=='0' && fin[i]=='1') zerotoone++;
        }
        lli ans=0;
        if(zerotoone<=onetozero)
        {
            ans+=zerotoone;
            onetozero=onetozero-zerotoone;
            ans+=onetozero;
        }
        else
        {
            ans+=onetozero;
            zerotoone=zerotoone-onetozero;
            ans+=zerotoone;
        }
        cout<<ans<<endl;
    }
}