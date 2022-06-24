#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       lli x=0,y=0,neg=0,shuru=0,ant=0,sum=0,lsum=0;
       lli a[n];
       for(lli i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];}
        if(n==1 && a[0]<=0 )
            cout<<"1 0"<<endl;
        else if(n==1)
            cout<<"0 0"<<endl;
            else{
       for(lli i=0;i<n;i++)
       {
           if(a[i]==0)
           {
               if(i+1==n-1)
               {
                   if(lsum>=sum-lsum){
                    y=n-i;
                   ant=n-i;}
                   else{
                       x=i+1;
                       shuru=i+1;}
               }
               else if(i+1>n-i){
                y=n-i;
                ant=n-i;}
               else{
                x=i+1;
                shuru=i+1;}
           }
           else
            lsum+=a[i];
       }
      // cout<<"shuru "<<shuru<<" ant "<<ant<<endl;
       for(lli i=x;i<n-y;i++)
       {
           if(a[i]<0)
            neg++;
       }
       if(neg==0 || neg%2==0)
        cout<<x<<" "<<y<<endl;
       else
       {
           lli strt=x,ed=n-y-1;
           x=0,y=0;
           while(strt<ed)
           {
               if(a[strt]<0 && a[ed]<0 && a[strt]==-1 && a[ed]==-2)
               {
                   x++;
                   if(y!=0)
                    y--;
                   break;
               }
               else if(a[strt]<0 && a[ed]<0 && a[strt]==-2 && a[ed]==-1)
               {
                   y++;
                   if(x!=0)
                    x--;
                   break;
               }
               else if(a[strt]>0 && a[ed]<0 )
               {
                   y++;
                   if(x!=0)
                    x--;
                   break;
               }
               else if(a[strt]<0 && a[ed]>0)
               {
                   x++;
                   if(y!=0)
                    y--;
                   break;
               }
               else
               {
                   strt++;
                   ed--;
                   x++;y++;
               }
           }
           cout<<x+shuru<<" "<<y+ant<<endl;
       }
            }
   }

    return 0;
}

