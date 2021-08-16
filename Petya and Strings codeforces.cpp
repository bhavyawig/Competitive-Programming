#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int lens1=s1.length();
    int lens2=s2.length();
    for(int i=0;i<lens1;i++)
    {
        if(s1[i]>=65 && s1[i]<=90)
        {
            s1[i]=s1[i]+32;
        }
    }
    for(int i=0;i<lens2;i++)    {
        if(s2[i]>=65 && s2[i]<=90)
        {
            s2[i]=s2[i]+32;
        }
    }
     if(s1>s2)
        {
            cout<<"1";
        }
        else if(s2>s1)
                {
                    cout<<"-1";
                }
                else{
                    cout<<"0";
                }

    return 0;
}

