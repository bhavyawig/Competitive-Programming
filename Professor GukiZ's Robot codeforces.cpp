#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli x1,y1;
   cin>>x1>>y1;
   lli x2,y2;
   lli cnt=0;
   cin>>x2>>y2;
   lli ans1=abs(x1-x2);
   lli ans2=abs(y1-y2);
   cout<<max(ans1,ans2)<<endl;
  // while(x1!=x2 || y1!=y2)
   //{
     //  if(x1<x2)
       // x1++;
  //     else if(x1>x2)
    //    x1--;
      // if(y1<y2)
        //y1++;
      // else if(y1>y2)
       // y1--;

       //cnt++;
   //}

   //cout<<cnt<<endl;
    return 0;
}

