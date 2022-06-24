
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli x;
       cin>>x;
       if(x<=1399)
        cout<<"Division 4"<<endl;
       else if(x>=1400 && x<=1599)
       cout<<"Division 3"<<endl;
       else if(x>=1600 && x<=1899)
        cout<<"Division 2"<<endl;
       else
        cout<<"Division 1"<<endl;

}

    return 0;
}
