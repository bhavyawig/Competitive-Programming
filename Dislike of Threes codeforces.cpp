#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[1001];
    for(int e=0;e<t;e++)
    {
        int k,p,j=0;
        cin>>k;
        for(int i=1;i<=1666;i++)
        {
            if(i%3==0 || i%10==3)
            {
                continue;
            }
            else
            {
                arr[j]=i;
                j++;
                p=j;
            }
        }
        cout<<arr[k-1]<<endl;
    }
    return 0;
}

