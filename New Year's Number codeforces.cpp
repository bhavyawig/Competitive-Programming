#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        int last=n%10;
        int ap=n-(last*2021);
        int x=ap/2020;
        if(n<2020)
        {
            cout<<"NO"<<endl;
        }
        else if(n%2021==0 || n%2020==0 )
        {
            cout<<"YES"<<endl;
        }
        else if(ap%2020==0 && ((last*2021)+(x*2020)==n) )
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
