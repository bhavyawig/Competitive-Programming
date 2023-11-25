#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli d;
   cin>>d;
   lli ans=d;
   lli x = 0, y =round(sqrt(d));
    while (x <= y) {
        lli currentSum = x * x + y * y;
        ans=min(ans,abs(currentSum-d));
        if (currentSum == d)
            {ans=0;
            break;
            }

         if (currentSum < d)
            ++x;
        else
            --y;
    }
   // cout<<x<<" "<<y<<" ";
    lli fir=abs(x*x+y*y-d);
    y++;
    lli sec=abs(x*x+y*y-d);
    y--;x--;
    lli thir=abs(x*x+y*y-d);
    x++;y--;
    lli fr=abs(x*x+y*y-d);
    ans=min(ans,fir);
    ans=min(ans,sec);
    ans=min(ans,thir);
    ans=min(ans,fr);
   cout<<ans;
}