#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n;
        cin>>n;
        string s;
        cin>>s;
        int strt=-1,end=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                strt=i;
                break;
            }
        }   
         for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='B')
            {
                end=i;
                break;
            }
        } 
        if(strt==-1 && end==-1) cout<<"0"<<endl;
        else
        cout<<end-strt+1<<endl;  
    }
}
