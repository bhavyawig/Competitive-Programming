#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string sml;
    cin>>sml;
    string l="oxxoxxoxxoxx";
    lli lsml=sml.length();
    lli ll=l.length();
    lli j;
    for(lli i=0;i<=ll-lsml;i++)
    {
        for( j=0;j<lsml;j++){
            if(l[i+j]!=sml[j])
            {
                break;
            }
        }

            if(j==lsml)
            {
                cout<<"Yes"<<endl;
                exit(0);
            }
    }
                cout<<"No"<<endl;
    return 0;
}

