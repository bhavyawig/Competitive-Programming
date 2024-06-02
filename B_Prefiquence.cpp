#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {

    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        lli k=0;
        for(int i=0;i<m;i++)
        {
            if(k<n && b[i]==a[k])
            {
                k++;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}


