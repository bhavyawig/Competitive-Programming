#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n],cpy[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
    cpy[i]=a[i];
   }
   sort(cpy,cpy+n);
   int kro=0;
   for(int i=0;i<n;i++)
   {
       if(cpy[i]!=a[i])
        kro++;
   }
   if(kro==0 || kro==2)
    cout<<"YES";
   else
    cout<<"NO";

    return 0;
}


