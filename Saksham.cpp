#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    string s;
    cin>>s;
    lli fz =-1;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '0')
        {
            fz = i;
            break;
        }
    }

    if(fz== -1)
        cout<<n<<"\n";
    else
        cout<<fz+1<<"\n";
    return 0;
}
