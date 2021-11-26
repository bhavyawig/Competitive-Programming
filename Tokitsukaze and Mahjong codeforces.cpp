#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli  arr[3];
   for(lli i=0;i<3;i++)
   {
       lli l,n;
       cin>>l;
       char a;
       cin>>a;
       if(a=='m')
       {
           n=2;
       }
       if(a=='p')
       {
           n=4;
       }
       if(a=='s')
       {
           n=6;
       }
       n=n*10;
       arr[i]=l+n;
   }
   lli q=sizeof(arr)/sizeof(arr[0]);
   sort(arr,arr+q);
   //for(lli i=0;i<3;i++)
   //{
     //  cout<<arr[i];
   //}
   if((arr[2]-arr[1]==0 && arr[1]-arr[0]==0) || (arr[2]-arr[1]==1 && arr[1]-arr[0]==1))
   {
       cout<<"0";
   }
   else if(arr[2]-arr[1]==0 || arr[1]-arr[0]==0 || arr[2]-arr[1]==1 || arr[1]-arr[0]==1 || arr[2]-arr[1]==2 || arr[1]-arr[0]==2)
   {
       cout<<"1"<<endl;
   }
   else
   {
       cout<<"2"<<endl;
   }

       return 0;
}

