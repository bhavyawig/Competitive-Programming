#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
        lli n,d;
        cin>>n>>d;
        string s,f;
        cin>>s;
        int check=0;
        for(int i=0;i<n;i++)
        {
             f+=s[i];
            if(stoi(f)>=d)
            {
                cout<<s[i];
            }
            else if(stoi(f)<d && check==0)
            {
                cout<<d<<s[i];
                check++;
            }
            else
                cout<<s[i];
                f="";
        }
        if(check==0) cout<<d;
        cout<<endl;
    }

    return 0;

}
