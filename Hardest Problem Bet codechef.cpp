#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int sa,sb,sc;
        cin>>sa;    cin>>sb;   cin>>sc;
        if(sa<sb && sa<sc)
        {
            cout<<"Draw"<<endl;
        }
        else if(sb<sa && sb<sc)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}


