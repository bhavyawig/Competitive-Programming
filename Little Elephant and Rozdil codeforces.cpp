#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,val,min,count=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            val=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(min==a[i])
        {
           count++;
        }
    }
    if(count==1){
        cout<<val+1;
    }
    else{
        cout<<"Still Rozdil";
    }

    return 0;
}

