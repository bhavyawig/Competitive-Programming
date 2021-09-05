#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int  n;
    cin >> n;
    int i=0;
    for ( i = 0; i <= 64; i++)
    {
           long long int temp = pow(2,i);
        if(temp>=n){
            break;
        }
    }
    if(n==1)
    {cout << 0;}
    else if((ceil(log(n))==floor(log2(n))))
    {
        cout<<ceil(log2(n));
    }
    else
    {
        cout << i-1;
    }
    return 0;
}

