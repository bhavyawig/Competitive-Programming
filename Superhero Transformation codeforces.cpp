#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
        string s,t;
        cin>>s;
        cin>>t;
        int lens=s.length();
        int lent=t.length();
        lli vov1=0,vov2=0,conste1=0,conste2=0;
        if(lens==lent){
        for(int i=0;i<lens;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u')
                {
                    continue;
                }
                else
                {
                    cout<<"No"<<endl;
                    exit(0);
                }
            }
            if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u')
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {
                    continue;
                }
                else
                {
                    cout<<"No"<<endl;
                    exit(0);
                }
            }
        }}
        else
        {
            cout<<"No"<<endl;
            exit(0);
        }
        cout<<"Yes"<<endl;
    return 0;
}


