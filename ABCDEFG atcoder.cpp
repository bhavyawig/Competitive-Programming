#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   char p,q;
   cin>>p>>q;
   int p1=0,q1=0;
   if(p=='A') p1=0;
   if(p=='B') p1=1;
   if(p=='C') p1=2;
   if(p=='D') p1=3;
   if(p=='E') p1=4;
   if(p=='F') p1=5;
   if(p=='G') p1=6;

   if(q=='A') q1=0;
   if(q=='B') q1=1;
   if(q=='C') q1=2;
   if(q=='D') q1=3;
   if(q=='E') q1=4;
   if(q=='F') q1=5;
   if(q=='G') q1=6;
   //cout<<p1<<" "<<q1<<endl;
   int a[7];
   a[0]=3;a[1]=1;a[2]=4;a[3]=1;a[4]=5;a[5]=9;a[6]=0;
   int sum=0;
   for(int i=min(p1,q1);i<max(q1,p1);i++)
    sum+=a[i];
   cout<<sum<<endl;

    return 0;

}
