#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli a,b,c;
       cin>>a>>b>>c;
       if((b-a)==(c-b))
       {
           cout<<"yes"<<endl;
       }
       else{
        lli x=(2*b)-c;
        lli x1=(a+c)/2;
        lli x2=(2*b)-a;
        //cout<<x;
        if(x%a==0 && x>1 && x>a)
        {
            cout<<"yes"<<endl;
        }
        else if(x1%b==0 && x1>1 && x1>b && (a+c)%2==0)
        {
             cout<<"yes"<<endl;
        }
        else if(x2%c==0 && x2>1 && x2>c)
        {
             cout<<"yes"<<endl;
        }
        else
        {
             cout<<"no"<<endl;
        }

       }
   }

    return 0;
}

