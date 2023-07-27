#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++){
        int n,m;
        cin>>n>>m;
        int a[m];
        int sum=0;
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        int val=sum/n;
        if(val==m)
        {
            cout<<n<<endl;
        }
        else
        {
            if(val+1==m){
            int kr=n*val;
            int diff=sum-kr;
            cout<<diff<<endl;}
            else
            cout<<"0"<<endl;
        }
    }
    return 0;
}