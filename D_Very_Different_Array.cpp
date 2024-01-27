#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e1=0;e1<t;e1++)
    {
        lli n,m;
        cin>>n>>m;
        deque<lli> in,fin;
        lli sum=0;
        for(int i=0;i<n;i++)
        {
            lli g; cin>>g;
            in.push_back(g);
        }
         for(int i=0;i<m;i++)
        {
            lli gg; cin>>gg;
            fin.push_back(gg);
        }
        sort(in.begin(),in.end());
        sort(fin.rbegin(),fin.rend());
        vector<lli> uff;
        while ((uff.size())<n)
        {
            if(abs(in.back()-fin.back())>=abs(in.front()-fin.front()))
            {
                uff.push_back(abs(in.back()-fin.back()));
                in.pop_back();
                fin.pop_back();
            }
            else
            {
                uff.push_back(abs(in.front()-fin.front()));
               in.pop_front();
                fin.pop_front();
            }
        }
        for(lli i=0;i<uff.size();i++)
        sum+=uff[i];
        cout<<sum<<endl;
       
        // lli re=n-1;
        // for(lli i=0;i<n;i++)
        // {
        //     sum3+=abs(in[re]-fin[i]);
        //     re--;
        // }
        // cout<<max(sum,max(sum2,sum3))<<endl;
    }
}