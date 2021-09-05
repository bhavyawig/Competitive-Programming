#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s1,s2,s3;
    cin>>s1;  cin>>s2;  cin>>s3;
    if(s1!="ABC" && s2!="ABC" && s3!="ABC")
    {
        cout<<"ABC";
    }
    else if(s1!="ARC" && s2!="ARC" && s3!="ARC")
    {
        cout<<"ARC";
    }
    else if(s1!="AGC" && s2!="AGC" && s3!="AGC")
    {
        cout<<"AGC";
    }
    else
    {
        cout<<"AHC";
    }
    return 0;
}


