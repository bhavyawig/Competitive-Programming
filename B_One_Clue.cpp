#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli k,x;
    cin>>k>>x;
    vector<int> ans;

    lli chot=x,bada=x;
    for(int i=0;i<k-1;i++)
    {
        chot--;
        ans.push_back(chot);
        bada++;
        ans.push_back(bada);
    }
    ans.push_back(x);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";

}