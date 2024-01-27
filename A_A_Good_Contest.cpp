#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli cnt=0;
    for(int i=0;i<n;i++)
    {
        string a;
        int fir,se;
        cin>>a>>fir>>se;
        if(fir>=2400 && se>fir)
        cnt++;
    }
    if(cnt>=1) cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}