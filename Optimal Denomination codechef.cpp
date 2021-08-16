#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,p,count1=0,count2=0,count3=0,count4=0,r=0,w=0;
        cin>>n;
        int a[n],exp,lst,cpy,expcpy;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int q=sizeof(a)/sizeof(a[0]);
        sort(a,a+q);
        int min1=a[0];
        int max=a[n];
        for(int j=0;j<n;j++)
        {
            if(a[j]%min1==0)
            {
                r++;
            }
            else{
                w++;
                exp=j;
            }
        }
        if(r==n)
        {
            lst=a[n];
            a[n]=min1;
            for(int k=0;k<n;k++)
            {
                count1=count1+(a[k]/min1);
            }
            a[n]=lst;
            cpy=a[0];
            a[0]=a[1];
            for(int k=0;k<n;k++)
            {
                count2=count2+(a[k]/a[1]);
            }
            a[0]=cpy;

        }
        if(w==1)
        {
            expcpy=a[exp];
            a[exp]=min1;
            for(int k=0;k<n;k++)
            {
                count3=count3+(a[k]/min1);
            }
            a[exp]=expcpy;
        }
        if(w>1)
        {
            lst=a[n];
            a[n]=1;
            for(int k=0;k<n;k++)
            {
                count4=count4+a[k];
            }
        }
        cout<<count1<<endl;
        cout<<count2<<endl;
        cout<<count3<<endl;
        cout<<count4;
       int fin[4];
       fin[0]=count1;fin[1]=count2;fin[2]=count3;fin[3]=count4;
       int min2=fin[0];
     //  for(int j=0;j<4;j++)
      // {
      //     if(fin[j]!=0){
      //     if(min2>fin[j])
      //     {
      //         min2=fin[j];
      //     }}
      // }
       //cout<<min2<<endl;

}

    return 0;
}

