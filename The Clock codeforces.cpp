#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli good[16] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};

int main()
{
    lli test;
    cin>>test;
    for(lli e=0; e<test; e++)
    {
        char a[5];
        for(lli i=0; i<5; i++)
            cin>>a[i];
        lli x;
        cin>>x;
        set<lli> s;
        lli cnt=0;
        lli l=a[0]-'0';
        lli m=a[1]-'0';
        lli hr=(10*l)+m;
        lli n=a[3]-'0';
        lli o=a[4]-'0';
        lli minu=(10*n)+o;
        hr=hr*60;
        minu+=hr;
        lli         mini=minu+1,mom=0;
        while(mini!=minu)
        {
            if(mom==0)
            {
                mini--;
                mom++;
            }
            mini+=x;
            mini%=1440;
            s.insert(mini);
        }
        for(auto itr: s)
        {
            for(lli i=0; i<16; i++)
            {
                if(itr==good[i])
                    cnt++;
            }
        }
        cout<<cnt<<endl;

    }

    return 0;
}

