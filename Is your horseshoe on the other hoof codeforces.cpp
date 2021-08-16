
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int s1,s2,s3,s4;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    cin>>s4;
    set<int, greater<int>>su;
    su.insert(s1);
    su.insert(s2);
    su.insert(s3);
    su.insert(s4);
    int n=su.size();
    cout<<4-n;
    return 0;
}
