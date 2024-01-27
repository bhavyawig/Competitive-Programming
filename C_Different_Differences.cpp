#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    for(int y=0;y<t;y++){
    lli k,n;
    cin>>k>>n;
    lli cnt=0;
    vector<int> vec;
    for(int i=0;i<k;i++)
    {
        if(n-cnt>=k-i)
        {
            vec.push_back(n-cnt);
           // cout<<n-cnt<<" ";
            n-=cnt;
            cnt++;
        }
        else
        cnt=INT_MAX;

        if(cnt==INT_MAX)
        {
            n--;
                        vec.push_back(n);
            //cout<<n<<" ";
        }
    }
    reverse(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<" ";
    cout<<endl;
    }
}