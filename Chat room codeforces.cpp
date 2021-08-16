
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string a="hello";
    int j=0,ans=0;
    for(int i=0;i<s.length();i++)
    {
       if(a[j]==s[i])
       {
           ans++;
           j++;
       }
       if(ans==5)break;
    }
    if(ans==5)cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
