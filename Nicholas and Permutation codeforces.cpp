#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,i;
    int max,min,p=0,q=0,cnt1,cnt2,cnt3,cnt4;
    cin>>n;
    unsigned long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
         if(max<a[i])
        {
            max=a[i];
            p=i;
        }
        if(p==0)
        {
            p=0;
        }
    }
    for(i=0;i<n;i++)
    {
         if(min>a[i])
        {
            min=a[i];
            q=i;
        }
         if(q==0)
        {
            q=0;
        }
    }
    cnt1=q;
    cnt2=n-1-q;
    cnt3=p;
    cnt4=n-1-p;
    if(cnt1>=cnt2 && cnt1>=cnt3 && cnt1>=cnt4)
    {
        cout<<cnt1;
    }
    else if(cnt2>=cnt1 && cnt2>=cnt3 && cnt2>=cnt4)
    {
        cout<<cnt2;
    }
    else if(cnt3>=cnt2 && cnt3>=cnt1 && cnt3>=cnt4)
    {
        cout<<cnt3;
    }
    else if(cnt4>=cnt2 && cnt4>=cnt1 && cnt4>=cnt3)
    {
        cout<<cnt4;
    }

   return 0;
}
