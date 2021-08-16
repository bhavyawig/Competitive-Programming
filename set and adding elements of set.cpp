
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a[5],sum=0;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    set<int> ss;
    for(i=0;i<5;i++)
    {
        ss.insert(a[i]);
    }
    for (auto it = ss.begin(); it != ss.end(); it++){
       sum=sum+(*it);
}
    cout<<sum;
    return 0;
}
