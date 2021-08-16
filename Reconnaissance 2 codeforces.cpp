#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i1=0,min,diff,max;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[1]>=a[0]){
    min=a[1]-a[0];}
    else{
        min=a[0]-a[1];}
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]>a[i]){
        diff=a[i+1]-a[i];}
        else{
            diff=a[i]-a[i+1];}
       if(min>=diff)
       {
           min=diff;
           i1=i;
       }
    }

    if(a[n-1]>a[0]){max=a[n-1]-a[0];}
    else{max=a[0]-a[n-1];}
    if(min<=max)
    {
        cout<<i1+1<<" "<<i1+2;
    }
    else{
        cout<<n<<" 1";
    }

    return 0;
}
