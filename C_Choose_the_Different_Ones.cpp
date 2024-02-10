#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,m,k;
        cin>>n>>m>>k;
        lli a[n],b[m];
        set<int> s1,s2;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s1.insert(a[i]);
        }
         for(int i=0;i<m;i++)
        {
            cin>>b[i];
            s2.insert(b[i]);
        }
        int fir1=0,sec1=0,no=0;
        for(int i=1;i<=k;i++)
        {
            bool fir=s1.find(i)!=s1.end();
            bool sec=s2.find(i)!=s2.end();
            if(fir==false && sec==false)
            {
                no++;
                break;
            }
            else if(fir==true && sec==false)
            {
                fir1++;
            }
            else if(fir==false && sec==true)
            sec1++;
        }
        if(no>=1) cout<<"NO"<<endl;
        else if(fir1>(k/2) || sec1>(k/2)) cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}
