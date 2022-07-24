#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int n;
   cin>>n;
   int a[n];
   int sum=0,rightsum=0,leftsum=0;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       sum+=a[i]; // total sum calculate ho rha h
   }
   sort(a,a+n); // sorting
   for(int i=n-1;i>=0;i--)
   {
        rightsum+=a[i];
        leftsum=sum-rightsum;
       if(rightsum>leftsum)
       {
           cout<<n-i;
           exit(0);
       }
   }

    return 0;
}

