
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k;
    cin>>n;
    cin>>k;
    int i;
    while(k--)
    {
        if(n%10==0)
        {
         n=n/10;
        }
        else{
            n--;
        }
    }
    cout<<k;
    return 0;
}
