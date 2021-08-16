
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a[5],sum=0;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
     int n=sizeof(a)/sizeof(a[0]);
     sort(a,a+n);
      if(a[2]==a[3] &&  a[3]==a[4] && a[0]!=a[1])
      {
          a[2]=0;a[3]=0;a[4]=0;
      }
      else if (a[2]==a[3] &&  a[3]==a[4] && a[0]==a[1])
      {
          if((a[4]+a[3]+a[2])>=(a[0]+a[1]))
          {
              a[2]=0;a[3]=0;a[4]=0;
          }
          else{
            a[0]=0;a[1]=0;
          }
      }
      else if(a[1]==a[2] &&  a[2]==a[3]  )
      {
          a[1]=0;a[2]=0;a[3]=0;
      }
      else if(a[0]==a[1] &&  a[1]==a[2] && a[3]!=a[4])
      {
          a[1]=0;a[2]=0;a[0]=0;
      }
      else if(a[0]==a[1] &&  a[1]==a[2] && a[3]==a[4])
      {
           if((a[2]+a[1]+a[0])>=(a[3]+a[4]))
          {
              a[0]=0;a[1]=0;a[2]=0;
          }
          else{
            a[3]=0;a[4]=0;
          }
      }
      else if(a[3]==a[4]){
        a[3]=0;a[4]=0;
      }
      else if(a[2]==a[3])
      {
           a[3]=0;a[2]=0;
      }
      else if(a[1]==a[2])
      {
          a[1]=0;a[2]=0;
      }
      else if(a[0]==a[1])
      {
          a[1]=0;a[0]=0;
      }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }

    cout<<sum;
    return 0;
}
