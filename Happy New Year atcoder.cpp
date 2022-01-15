#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli k;
    cin>>k;
    int p=0;
    string s=bitset<64> (k).to_string();
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            cout<<"2";
            p++;
        }
        else if(s[i]=='0' && p>0)
        {
            cout<<s[i];
        }
    }

    return 0;
}
