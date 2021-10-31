#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        string inp,res;
        lli k=0,p=0;
        cin>>inp;
        int len=inp.length();
        for(lli i=1;i<len;i++)
        {
            if(inp[i]==inp[i-1])
            {
                i++;
            }
            else
            {
                res[k]=inp[i];
                k++;
                p=k;
            }
        }
        for(lli i=0;i<p;i++){
        cout<<res[i];
        }
        cout<<endl;
    }
    return 0;
}
