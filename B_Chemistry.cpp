#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
     lli t;
     cin>>t;
     for(int e=0;e<t;e++)
     {
        lli n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        lli len=n-k;
        if(len%2!=0) len--;
        map<char,int> m;
        for(int i=0;i<n;i++)
        m[s[i]]++;

        for(auto itr:m)
        {
            if(len!=0){
            if(itr.second%2==0 && itr.second<=len)
            len-=itr.second;
            else if(itr.second%2==0 && itr.second>len)
            len=0;
            else if(itr.second%2!=0 && itr.second-1<=len)
            len-=itr.second-1;
            else if(itr.second%2!=0 && itr.second-1>len)
            len=0;
            }
        }
        if(len==0) cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
     }
    return 0;
}