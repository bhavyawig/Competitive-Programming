#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli a,b,c;
        cin>>a>>b>>c;
        lli left=b%3;
        if(left==0)
        {
            if(c%3==0)
            cout<<a+(b/3)+(c/3)<<endl;
            else
             cout<<a+(b/3)+(c/3)+1<<endl;
        }
        else if(left==1)
        {
            if(c>=2)
            {
                c-=2;b+=2;
                if(c%3==0)
            cout<<a+(b/3)+(c/3)<<endl;
            else
             cout<<a+(b/3)+(c/3)+1<<endl;
            }
            else
            cout<<"-1"<<endl;
        }
        else if(left==2)
        {
            if(c>=1)
            {
                c--;b++;
                if(c%3==0)
            cout<<a+(b/3)+(c/3)<<endl;
            else
             cout<<a+(b/3)+(c/3)+1<<endl;
            }
            else
            cout<<"-1"<<endl;
        }
    }
}