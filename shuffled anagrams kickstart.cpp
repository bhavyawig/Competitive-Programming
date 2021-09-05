#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        string s,b;
        char cpy;
        cin>>s;
        int len=s.length();
        int k=0,p=0,z=0,str,w=0;
        for(int i=1;i<len;i++)
        {
            b+=s[i];
            k++;
            p=k;
        }
        b+=s[0];
        for(int i=0;i<len;i++)
        {
            if(s[i]==b[i])
            {
                z++;
                str=i;
            }
        }
        if(z==1)
        {
            cpy=b[str];
            b[str]=b[len-1];
            b[len-1]=cpy;
        for(int i=0;i<len;i++)
        {
            if(s[i]==b[i])
            {
                w++;
            }
        }
        if(w==0)
        {
            cout<<"Case #"<<e+1<<": ";
            for(int i=0;i<len;i++)
            {
                cout<<b[i];
            }
        }
        else
        {
            cout<<"Case #"<<e+1<<": "<<"IMPOSSIBLE";
        }
        }
        else if(z==0)
        {
            cout<<"Case #"<<e+1<<": ";
             for(int i=0;i<len;i++)
            {
                cout<<b[i];
            }
        }
        else
        {
             cout<<"Case #"<<e+1<<": "<<"IMPOSSIBLE";
        }
        cout<<endl;
    }
    return 0;
}

