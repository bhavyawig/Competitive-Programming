#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
       int a[3];
       cin>>a[0];  cin>>a[1];   cin>>a[2];
       int q=sizeof(a)/sizeof(a[0]);
       sort(a,a+q);
       if(a[1]==a[2])
       {
           cout<<"YES"<<endl;
           cout<<a[0]<<" "<<a[0]<<" "<<a[1]<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
    return 0;
}


