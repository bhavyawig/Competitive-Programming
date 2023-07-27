#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        char a[8][8];
        for(lli i=0;i<8;i++)
        {
            for(lli j=0;j<8;j++)
            {
                cin>>a[i][j];
            }
        }
        string temp="";
        for(lli i=0;i<8;i++)
        {
            for(lli j=0;j<8;j++)
            {
                if(a[j][i]!='.')
                temp+=a[j][i];
            }
        }
        cout<<temp<<endl;
    }

    return 0;

}