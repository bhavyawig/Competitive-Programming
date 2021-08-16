#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,count=0,sum=0;
    cin>>k;
    int a[12];
    for(i=0;i<12;i++)
    {
        cin>>a[i];
    }
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    for(i=11;i>=0;i--)
    {
        sum=sum+a[i];
        if(sum<k)
        {
            count++;
        }
    }

    if(k==0){cout<<"0";}
    else if(count==0  && a[11]<k){
        cout<<"-1";
    }
    else if(count==12 && sum<k){
        cout<<"-1";
    }
    else{
    cout<<count+1;
    }
    return 0;
}

