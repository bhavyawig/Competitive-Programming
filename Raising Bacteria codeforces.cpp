#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    long long int n,count=0;
    n=log(x)/log(2);
    while(n>=1 && x>0)
    {
        n=log(x)/log(2);
        x=x-pow(2,n);
        //cout<<x<<endl;
        count++;
    }
  // cout<<count<<endl;
    //cout<<x<<endl;
    count=count+x;
    cout<<count;
    return 0;
}
