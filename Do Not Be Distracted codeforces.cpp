#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,c=0;
        cin>>n;
        char a[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])
            {
                for(int w=i;w<n;w++)
                {
                    if(a[i-1]==a[w] && c==0)
                    {
                        cout<<"NO"<<endl;
                        c++;
                    }
                }
            }
        }
        if(c==0)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
