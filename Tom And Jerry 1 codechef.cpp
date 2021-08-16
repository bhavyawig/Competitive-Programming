#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
     int j;
      for(j=0;j<t;j++)
      {
          int a,b,c,d,k,sum=0;
          cin>>a;cin>>b;cin>>c;cin>>d;cin>>k;
          if(c>=a)
          {
              sum=sum+(c-a);
          }
          else{
            sum=sum+(a-c);
          }
          if(d>=b)
          {
              sum=sum+(d-b);
          }
          else{
            sum=sum+(b-d);
          }


          if(k>=sum && sum%2==0)
          {
              if(k%2==0){
              cout<<"yes"<<endl;}
              else{
                cout<<"no"<<endl;
              }
          }
          else if(k>=sum && sum%2!=0)
          {
              if(k%2!=0){
              cout<<"yes"<<endl;}
              else{
                cout<<"no"<<endl;
              }
          }
          else{
            cout<<"no"<<endl;
          }


    }
    return 0;
}
