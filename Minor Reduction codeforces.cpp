#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

vector<lli> input(vector<lli> inputvector,lli endlimit)
{
    for(lli i=0;i<endlimit;i++)
    {
        lli samplenumber;
        cin>>samplenumber;
        inputvector.push_back(samplenumber);
    }
    return inputvector;
}

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       string s;
       cin>>s;
       int cnt=0,store=0,dd=0;
       int len=s.length();
       for(int i=1;i<len;i++)
       {
           int n=(int(s[i-1])-48) + (int(s[i])-48);
           if(n>=10)
           {
               cnt++;
               store=i-1C;
               dd=n;
           }
       }
       if(cnt>0)
       {
           for(int i=0;i<store;i++)
           {
               cout<<s[i];
           }
           cout<<dd;
           for(int i=store+2;i<len;i++)
           {
               cout<<s[i];
           }
           cout<<endl;
       }
       else
       {
           cout<<(int(s[0])-48)+(int(s[1])-48);
           for(int i=2;i<len;i++)
            cout<<s[i];

           cout<<endl;
       }
       }
    return 0;
}

