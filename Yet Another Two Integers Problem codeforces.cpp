#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a; cin>>b;
        int letm=max(a,b);
        int let=min(a,b);
        int diff=letm-let;
        if(diff%10==0)
        {
            cout<<diff/10<<endl;
        }
        else
        {
            cout<<(diff/10)+1<<endl;
        }
    }
    return 0;
}

