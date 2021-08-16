#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m[5],w[5],win,loss,i,x[5],sum=0,a;
    x[0]=500;x[1]=1000;x[2]=1500;x[3]=2000;x[4]=2500;
    for(i=0;i<5;i++)
    {
        cin>>m[i];
    }
     for(i=0;i<5;i++)
    {
        cin>>w[i];
    }
    cin>>win;
    cin>>loss;
      for(i=0;i<5;i++)
    {
        a=(((1-(m[i]/250))*x[i])-50*w[i]);
        sum=sum+a;
    }
    win=win*100;
    sum=sum+win;
    loss=loss*50;
    sum=sum-loss;
    cout<<sum;
    return 0;
}
