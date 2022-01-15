#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
        lli n,c;
        cin>>n>>c;
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=(n/2)+1;
        }
        if(c%2==0)
        {
            c=c/2;
        }
        else
        {
            c=(c/2)+1;
        }
        cout<<c*n<<endl;
   }

    return 0;
}

