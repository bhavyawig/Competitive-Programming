#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    string str;
    for (int i = 31; i >= 0; i--) { 
        int k = n >> i; 
        if (k & 1) 
            str+="1"; 
        else
             str+="0"; 
    } 
    lli cnt=0;
    for(int i=str.size()-1;i>=0;i--)
    {
        if(str[i]=='0') cnt++;
        else
        break;
    }
    cout<<cnt;
}