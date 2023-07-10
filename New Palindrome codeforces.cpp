#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
        string s;
        cin>>s;
        int cnt=0;
        for(int i=1;i<s.length()/2;i++)
        {
            if(s[i]!=s[i-1])cnt++;
        }
        if(cnt==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;

}
