#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n;
        cin>>n;
        lli p=n;
         int binaryNum[32];
        int i = 0;
        while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
     lli ans1=p+1-pow(2,i-1);
     lli ans2=pow(2,i-1)-pow(2,i-2);
     cout<<max(ans1,ans2)<<endl;
    }
    return 0;
}

