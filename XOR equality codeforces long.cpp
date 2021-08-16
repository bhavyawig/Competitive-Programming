#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 long long t,i;
 long long  m=1000000007;
 cin>>t;
 long long n[t];
 for(i=0;i<t;i++)
 {
     cin>>n[i];
 }
 for(i=0;i<t;i++)
 {
     n[i]=((pow(2,n[i]))-1);
     cout<<(n[i]/2 +1)<<endl;
 }
    return 0;
}
