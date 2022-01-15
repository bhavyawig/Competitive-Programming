#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
        int Z,Y,A,B,C;
        cin>>Z>>Y>>A>>B>>C;
        int left=Z-Y;
        int req=A+B+C;
        if(left>=req)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
   }

    return 0;
}

