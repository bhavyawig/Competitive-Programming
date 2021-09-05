#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int w,h,n;
        cin>>w; cin>>h; cin>>n;
        int count=1;
        while(w%2==0)
        {
            w=w/2;
            count=count*2;
        }
        while(h%2==0)
        {
            h=h/2;
            count=count*2;
        }
        if(count>=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

