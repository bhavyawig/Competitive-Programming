#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n;
    int i,x,y;
    cin>>n;
    string s;
    cin>>s;
    set<int> str;
    for(i=0;i<n;i++)
    {
        str.insert(s[i]);
    }
    x=str.size();
    y=n-x;

    if(n>26)
    {
        cout<<"-1";
    }
    else
    {
        cout<<y;
    }

    return 0;
}
