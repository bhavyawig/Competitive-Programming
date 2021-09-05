#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int test;
    cin>>test;
    for(int e=0;e<test;e++)
    {
        lli n,a,b,cnt1=0,cnt2=0;
        cin>>n;    cin>>a;    cin>>b;
        char s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            if(s[i]=='1')
            {
                cnt1++;
            }
            if(s[i]=='0')
            {
                cnt2++;
            }
        }
        lli bb=b*cnt1;
        lli aa=a*cnt2;
        cout<<aa+bb<<endl;
    }
    return 0;
}


