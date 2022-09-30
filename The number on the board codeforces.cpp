#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli k;
   cin>>k;
   string n;
   cin>>n;
   int sum=0,y;
   for(int i=0;i<n.length();i++)
   {
       int y=n[i]-'0';
       sum+=y;
   }
   //cout<<sum<<endl;
   if(sum>=k)
    cout<<0;
    else
    {
        int left=abs(sum-k);
        if(left%9==0)
        cout<<left/9;
        else
            cout<<(left/9)+1;
    }

    return 0;
}


