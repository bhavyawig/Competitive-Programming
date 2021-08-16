
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
    }
    set<char, greater<char>>s1;
    for(int i=0;i<n;i++)
    {
        s1.insert(s[i]);
    }
    int q=s1.size();
    if(q==26)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
