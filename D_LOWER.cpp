#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
    string s;
    cin>>s;
    lli q; 
    cin>>q;
    lli last=0,index=0;
    vector<pair<lli,lli>> vec;
    map<lli,char> m1;
    for(int i=0;i<q;i++)
    {
        lli t,x;
        char c;
        cin>>t>>x>>c;
        if(t==2 || t==3)
        {
            last=t;
            index=i;
        }
        else
        {
            s[x-1]=c;
            vec.push_back({i,x-1});
            m1[x-1]=c;
        }
    }
    if(last==2)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]=tolower(s[i]);
        }
        for(auto itr:vec)
        {
            if(itr.first>index)
            {
                char f=m1[itr.second];
                s[itr.second]=f;
            }
        }
        cout<<s<<endl;
    }
    else if(last==3)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]=toupper(s[i]);
        }
         for(auto itr:vec)
        {
            if(itr.first>index)
            {
                char f=m1[itr.second];
                s[itr.second]=f;
            }
        }
        cout<<s<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
    return 0;
}