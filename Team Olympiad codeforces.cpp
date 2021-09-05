#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt1=0,cnt2=0,cnt3=0,mini;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            cnt1++;
        }
        if(a[i]==2)
        {
            cnt2++;
        }
        if(a[i]==3)
        {
            cnt3++;
        }
    }
    if(cnt1<=cnt2 && cnt1<=cnt3)
    {
        mini=cnt1;
    }
    else if(cnt2<=cnt1 && cnt2<=cnt3)
    {
        mini=cnt2;
    }
    else if(cnt3<=cnt1 && cnt3<=cnt2)
    {
        mini=cnt3;
    }
    cout<<mini<<endl;
    for(int i=0;i<mini;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]==1)
            {
                cout<<j+1<<" ";
                 a[j]=0;
                break;
            }
        }
        for(int j=0;j<n;j++)
        {
            if(a[j]==2)
            {
                cout<<j+1<<" ";
                 a[j]=0;
                break;
            }
        }
        for(int j=0;j<n;j++)
        {
            if(a[j]==3)
            {
                cout<<j+1<<" ";
                 a[j]=0;
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}

