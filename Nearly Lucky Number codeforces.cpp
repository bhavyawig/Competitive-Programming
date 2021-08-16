#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    set<string, greater<string>>s1;
    set<string, greater<string> >::iterator itr;


        s1.erase(4);
        s1.erase(7);

    int n =size(s1);
    if(n==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    cout<<"YES";
    return 0;
}
