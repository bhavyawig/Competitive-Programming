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
        vector<lli> vec(n);
        map<int,int> m;
        set<int> s;
        for(lli i=0;i<n;i++)
        {
            cin>>vec[i];
            m[vec[i]]=-1;
            s.insert(vec[i]);
        }
        vec.clear();
       // sort(vec.begin(),vec.end());
       for(auto itr:s )
       vec.push_back(itr);
        int no=n;
        for(int i=0;i<vec.size();i++)
        {
            if(m[vec[i]]==-1)
            {
                if(n>=1)
                m[vec[i]]=n;
                else
                m[vec[i]]=n+1;
                if(m.find(n)!=m.end() && vec[i]<n)
                {
                    m[n]=vec[i];
                }
                n--;
            }
            else
            n=m[vec[i]]-1;
        }
        map<int,int> m1;
        for(auto itr: m)
        {
            m1[itr.second+itr.first]++;
        }
        int ans=0;
        for(auto itr:m1)
        {
            ans=max(ans,itr.second);
        }
        cout<<ans<<endl;
    }
}
