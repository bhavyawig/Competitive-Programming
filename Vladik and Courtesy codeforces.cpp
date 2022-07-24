#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli a,b;
   cin>>a>>b;
   lli k=1;
   bool turn=true;
   while(a>=0 && b>=0)
   {
       if(turn==true)
       {
           turn=false;
           a=a-k;
           k++;
       }
       else
       {
           turn=true;
           b=b-k;
           k++;
       }
   }
   if(b<0)
    cout<<"Valera"<<endl;
   else
    cout<<"Vladik"<<endl;
    return 0;
}

