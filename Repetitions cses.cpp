#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int  count=0,p=0;
    vector<int> v;
    cin>>s;
    long long int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            v.push_back(count);
            count=0;
        }
    }
    if(v.empty())
    {
        v.push_back(count);
    }
   long long int  max=v[0];
    for(int i=0;i<v.size();i++)
    {
        if(max<v[i])
        {
            max=v[i];
        }
    }
    cout<<max+1;


    return 0;
}

