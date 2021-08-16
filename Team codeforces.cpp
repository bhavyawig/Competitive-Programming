
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,count=0;
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a;cin>>b;cin>>c;
        if((a==1 && b==1 && c==1) || (a==1 && b==1 && c==0) || (a==1 && b==0 && c==1) || (a==0 && b==1 && c==1) )
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
