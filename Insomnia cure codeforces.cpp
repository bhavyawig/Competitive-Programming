
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int  a[5],max;
    int i,count=0;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<5;i++){
    if(max<=a[i])
    {
        max=a[i];
    }
    }
     if(a[0]!=1 && a[1]!=1 && a[2]!=1 && a[3]!=1 && a[4]!=1)
        {
            count++;
        }
    for(i=1;i<=max;i++)
    {

        if(i%a[0]==0 || i%a[1]==0 ||  i%a[2]==0 ||  i%a[3]==0 || i%a[4]==0 ||  a[0]%i==0  ||  a[1]%i==0  ||  a[2]%i==0 ||  a[3]%i==0
           ||  a[4]%i==0)
        {
            continue;
        }
        else{
            count++;
        }
    }

    cout<<max-count;
    return 0;
}
