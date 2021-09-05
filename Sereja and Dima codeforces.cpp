#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,seeja=0,dima=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0,j=n-1,m=0,k=1;
    while(i<=j)
    {
        if(a[i]>=a[j])
        {
            m=a[i];
            i++;
        }
        else
        {
            m=a[j];
            j--;
        }
        if(k%2==0)
        {
            seeja=seeja+m;
        }
        else
        {
            dima=dima+m;
        }
        k++;
    }
   cout<<dima<<" "<<seeja<<endl;
    return 0;
}

