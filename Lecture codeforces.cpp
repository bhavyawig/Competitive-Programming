#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;   cin>>m;
    string lec[m],lang[m];
    for(int i=0;i<m;i++)
    {
        cin>>lec[i];  cin>>lang[i];
    }
    string last[n];
    for(int i=0;i<n;i++)
    {
        cin>>last[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(last[i]==lec[j])
            {
                if(lec[j].size()>lang[j].size())
                {
                    cout<<lang[j]<<" ";
                }
                else
                {
                    cout<<lec[j]<<" ";
                }
            }
        }
    }
    return 0;
}


