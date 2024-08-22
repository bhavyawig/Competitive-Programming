#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        
    }
    return 0;
}

int n=arr.size();
int ans=0;
for(int j=0;j<n;j++)
{
    int no=arr[j];
    int one=0;
     for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            one++;
    }
    if(one==target)
    ans++;
}
return ans;


set<char> st;
for(auto itr: s2)
st.insert(itr)l

string ans="";

for(auto itr: s1)
{
    if(st.find(itr)==s.end())
    ans+=itr;
}
return ans;