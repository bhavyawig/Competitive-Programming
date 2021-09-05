#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,x;
        cin>>n;  cin>>x;
        if(n==1 || n==2)
        {
            cout<<"1"<<endl;
        }
        else
        {
            n=n-2;
            int l=n/x;
            if(n%x==0){
            cout<<l+1<<endl;}
            else
            {
                 cout<<l+2<<endl;
            }
        }
    }
    return 0;
}


