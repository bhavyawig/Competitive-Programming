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
         vector<char> are,uf;
   are={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v',
   'w','x','y','z'};
   vector<string> ans;
        for(lli a=1;a<=26;a++)
        {
            for(lli b=1;b<=26;b++)
            {
                for(lli c=1;c<=26;c++)
                {
                    if(a+b+c==n)
                    {
                        string aa="";
                        aa+=are[a-1];
                        aa+=are[b-1];
                        aa+=are[c-1];
                        ans.push_back(aa);
                        //cout<<aa<<endl;
                    }
                }
            }
        }
        sort(ans.begin(),ans.end());
        cout<<ans[0]<<endl;   
    }
}
