#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
        lli n;
        cin>>n;
         int dono=INT_MAX,first=INT_MAX,second=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int m; string s;
            cin>>m>>s;
            if(s[0]=='1' && s[1]=='1') dono=min(dono,m);
            else if(s[0]=='1' && s[1]=='0') first=min(first,m);
            else if(s[0]=='0' && s[1]=='1') second=min(second,m);
        }
        if((first==INT_MAX || second==INT_MAX) && dono==INT_MAX) cout<<"-1"<<endl;
        else
        {
            if(first==INT_MAX || second==INT_MAX) cout<<dono<<endl;
            else
            cout<<min(dono,first+second)<<endl;
        }
    }

    return 0;

}
