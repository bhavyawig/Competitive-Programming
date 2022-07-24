#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string s;
   cin>>s;
   char first=s[0];
   lli sec=s[1]-'0';
   if((first =='a' && sec==1) || (first=='h' && sec==1) )
    cout<<3<<endl;
   else if((first =='a' && sec==8) || (first=='h' && sec==8) )
    cout<<3<<endl;
   else if(first =='a' || first=='h' || sec==1 || sec==8)
    cout<<5<<endl;
   else
    cout<<8<<endl;

    return 0;
}

