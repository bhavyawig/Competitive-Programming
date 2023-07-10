#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int n;
    cin>>n;
   int fir=2*n;
        int sec=3*n;
        //cout<<fir<<" "<<sec;
        map<int,int> m;
        while(n>0)
        {
            int val=n%10;
            n=n/10;
            m[val]++;
            cout<<val<<endl;
        }
         while(fir>0)
        {
            int val1=fir%10;
             fir=fir/10;
            m[val1]++;
             cout<<val1<<endl;
        }
         while(sec>0)
        {
            int val2=sec%10;
             sec=sec/10;
            m[val2]++;
             cout<<val2<<endl;
        }
        for(int i=1;i<=9;i++)
        {
            if( m[i]>=2 || m[i]==0) cout<<i<<endl;
        }
        if(m[0]>=1) cout<<"-1"<<endl;

    return 0;

}
