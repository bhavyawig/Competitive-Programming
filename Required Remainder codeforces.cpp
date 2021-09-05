#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y,n;
        cin>>x;  cin>>y;  cin>>n;
        int rem = n%x;
        if(rem>=y){
      cout<<n-(rem-y)<<endl;;
    }
    else{
        cout<<n-x+y-rem<<endl;
    }
    }
    return 0;
}

