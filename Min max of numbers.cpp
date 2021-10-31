#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
  // lli a,b;
   //cin>>a>>b;

  // cout<<"Minimum of a and b is : "<<min(a,b)<<endl;
 //  cout<<"Maximum of a and b is : "<<max(a,b)<<endl;

   // min and max of three numbers
 // lli c;
  // cin>>c;
  // cout<<"Minimum of three numbers "<<min(a,min(b,c))<<endl;
  // cout<<"Maximum of three numbers "<<max(a,max(b,c))<<endl;

   char x,y;
   cout<<"Enter two characters"<<endl;
   cin>>x>>y;


   cout<<min(x,y)<<endl;
   cout<<max(x,y)<<endl;


  lli maxd=max(x,y);
   cout<<maxd<<endl;


    return 0;
}

