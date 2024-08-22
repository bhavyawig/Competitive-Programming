#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,k;
        cin>>n>>k;
        vector<vector<char>> vec(n, vector<char> (n,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>vec[i][j];
               // cout<<vec[i][j];
            }
          //  cout<<endl;
        }

        for(int i=0;i<n;i+=k)
        {
            for(int j=0;j<n;j+=k)
            {
                cout<<vec[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}


