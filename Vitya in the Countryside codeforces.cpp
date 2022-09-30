#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   for(lli i=0;i<n;i++)
    cin>>a[i];
   if(n==1){
        if(a[0]==15)
        cout<<"DOWN";
   else if(a[0]==0)
    cout<<"UP";
   else
    cout<<-1<<endl;
   }
    else{
   if(a[n-1]>a[n-2] && a[n-1]!=15)
    cout<<"UP";
   else if(a[n-1]>a[n-2] && a[n-1]==15)
    cout<<"DOWN";
   else if(a[n-1]<a[n-2] && a[n-1]!=0)
    cout<<"DOWN";
   else
    cout<<"UP";}

    return 0;
}


