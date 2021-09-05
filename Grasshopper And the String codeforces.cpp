#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s;
    cin>>s;
    int len=s.length();
    int arr[100],k=0,p=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {
            arr[k]=i;
            k++;
            p=k;
        }
    }
    if(k==0)
    {
        cout<<len+1<<endl;
    }
    else{
    int x=max(arr[0]+1,len-arr[p-1]);
    //cout<<x<<endl;
    for(int i=1;i<p;i++)
    {
        int x=arr[i]-arr[i-1];
        arr[i-1]=x;
        //cout<<arr[i-1]<<endl;
    }
    arr[p-1]=0;
    //cout<<arr[p]<<" "<<p;
    int  maxi=arr[0];
    for(int i=1;i<p;i++)
    {
        if(maxi<=arr[i])
        {
            maxi=arr[i];
        }
    }
    if(maxi>=x){
    cout<<maxi;
    }
    else
    {
        cout<<x;
    }}
    return 0;
}


