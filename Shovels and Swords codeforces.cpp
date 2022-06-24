#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli a,b;
       cin>>a>>b;
       lli cnt=0;
       /*       if(a==b)
       {
           cout<<a/2<<endl;
       }
       else if(a<b)
       {
           if(b>=2*a)
            cout<<a<<endl;
           else{
                cnt=b/2;
                a=a-cnt;
                if(b%2!=0 && a>=2)
                {
                    cnt++;
                }
                cout<<cnt<<endl;
           }
       }
       else
       {
           if(a>=2*b)
            cout<<b<<endl;
           else{
                cnt=a/2;
                b=b-cnt;
                if(a%2!=0 && b>=2)
                {
                    cnt++;
                }
                cout<<cnt<<endl;
           }
       }
       */
       if(2*b<=a)
        cout<<b<<endl;
       else if(2*a<=b)
        cout<<a<<endl;
       else
        cout<<(a+b)/3<<endl;
   }

    return 0;
}

