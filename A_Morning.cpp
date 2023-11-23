#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        string s;
        cin>>s;
       int ans=0;
       int fir=0,sec=0,thir=0,four=0;
       if(s[0]=='0') fir=10;
       else fir=s[0]-'0';

       if(s[1]=='0') sec=10;
       else sec=s[1]-'0';

       if(s[2]=='0') thir=10;
       else thir=s[2]-'0';

       if(s[3]=='0') four=10;
       else four=s[3]-'0';

      ans=abs(fir-1)+abs(sec-fir)+abs(sec-thir)+abs(thir-four);
      cout<<ans+4<<endl;
    }
    return 0;
}