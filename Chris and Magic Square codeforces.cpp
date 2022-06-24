#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n][n];
   lli sum2=0,sum3=0,sum_of_row=0;
   lli row=0,column=0,sum=0;
   lli z=0;
   lli cnnot=0,cnnot2=0,presum=0;
   for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<n;j++)
       {
           cin>>a[i][j];
           if(a[i][j]==0)
           {
               row=i;
               column=j;
           }
       }
   }
   if(n==1)
    cout<<1;
   else{
   if(row!=0)
   {
       for(lli i=0;i<n;i++)
        presum+=a[0][i];
   }
   else if(row==0)
   {
       for(lli i=0;i<n;i++)
        presum+=a[1][i];
   }
   lli bb=0;
   for(lli i=0;i<n;i++)
   {
       sum=0;
       bb=0;
       for(lli j=0;j<n;j++)
       {
           if(i!=row)
           {
               sum+=a[i][j];
           }
           else
            bb++;
       }
       if(sum!=presum && bb==0){
         //   cout<<"1"<<endl;
        z++;}
   }
   cout<<z<<endl;
   lli bb2=0;
   for(lli i=0;i<n;i++)
   {
       sum=0;
       bb2=0;
       for(lli j=0;j<n;j++)
       {
           if(i!=column)
           {
               sum+=a[j][i];
           }
           else
            bb2++;
       }
       if(sum!=presum && bb2==0)
        z++;
   }
   cout<<z<<endl;
   lli sum_diagnol1=0,sum_diagnol2=0;
   for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<n;j++)
       {
           if(i==j && i!=row && j!=column)
            sum_diagnol1+=a[i][j];
            else if(i==j && (i==row || j==column))
                cnnot++;
            if(i+j==n-1 && i!=row && j!=column)
                sum_diagnol2+=a[i][j];
            else if(i+j==n-1 && (i==row || j==column))
                cnnot2++;
       }
   }
   if(sum_diagnol1!=presum && cnnot==0)
    z++;
    if(sum_diagnol2!=presum && cnnot2==0)
        z++;

   for(lli i=0;i<n;i++)
    sum_of_row+=a[row][i];
   for(lli i=0;i<n;i++)
   {
       if(row==0)
       {
           sum2+=a[1][i];
           sum3+=a[2][i];
       }
       else if(row==n-1)
       {
           sum2+=a[row-1][i];
           sum3+=a[row-2][i];
       }
       else
       {
           sum2+=a[row+1][i];
           sum3+=a[row-1][i];
       }
   }
   lli ans1=sum2-sum_of_row;
   lli ans2=sum3-sum_of_row;
  // cout<<z<<endl;
   if(z==0){
   if(ans1==ans2 && ans1>=1 && ans1<=1e18)
    cout<<ans1;
    else
        cout<<-1;
   }
   else
    cout<<-1;
   }

    return 0;
}

