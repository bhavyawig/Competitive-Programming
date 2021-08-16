
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ant=0,dat=0;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]=='A')
        {
            ant++;
        }
        if(s[i]=='D')
        {
            dat++;
        }
    }
    if(ant>dat)
    {
        cout<<"Anton";
    }
    else if(dat>ant)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }

    return 0;
}
