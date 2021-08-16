
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int stdn1,cap1,cap2,l1,l2,s1,capdiv,s2;
    cin>>stdn1;cin>>cap1;cin>>cap2;cin>>l1;cin>>l2;cin>>s1;cin>>capdiv;cin>>s2;
    int sum=(cap1*cap2)/capdiv;
    int sum1=(l1*l2);
    int sum2=(s1/s2);
    if(sum<=sum1 && sum<=sum2)
    {
        cout<<(sum/stdn1);
    }
    else if(sum1<=sum && sum1<=sum2)
    {
        cout<<(sum1/stdn1);
    }
    else if(sum2<=sum1 && sum2<=sum)
    {
        cout<<(sum2/stdn1);
    }
    return 0;
}
