#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,count0=0,count1=0,count00=0,count11=0,count=0;
    cin>>n;
    int i,l[n],r[n];
    for(i=0;i<n;i++)
    {
        cin>>l[i];cout<<" ";cin>>r[i];
    }
     for(i=0;i<n;i++)
    {
       if(l[i]==1){
        count1++;
       }
       else{
        count0++;
       }
       if(r[i]==0)
       {
           count11++;
       }
       else{
        count00++;
       }
    }
    if(count1>=count0){
        count=count+count0;
    }
    else{
        count=count+count1;
    }
    if(count11>=count00){
        count=count+count00;
    }
    else{
        count=count+count11;
    }
    cout<<count;
    return 0;
}
