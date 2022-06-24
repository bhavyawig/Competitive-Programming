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
       lli a[n];
       map<lli,lli> m;
       for(lli i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;}
        vector<lli> same,pos,neg;
        for(lli i=0;i<n;i++)
        {
            if(m[a[i]]==1 && a[i]>=0)
                pos.push_back(a[i]);
            else if(m[a[i]]>=1 && a[i]>=0)
                same.push_back(a[i]);
            else
                neg.push_back(a[i]);
        }
        sort(pos.begin(),pos.end());
        sort(same.begin(),same.end());
        sort(neg.begin(),neg.end());
        if(same.size()>=1){
        for(lli i=0;i<same.size();i++)
            cout<<same[i]<<" ";
        for(lli i=0;i<pos.size();i++)
            cout<<pos[i]<<" ";
        for(lli i=0;i<neg.size();i++)
            cout<<neg[i]<<" ";}
            else
            {
                for(lli i=0;i<neg.size();i++)
                    cout<<neg[i]<<" ";
            for(lli i=0;i<pos.size();i++)
                cout<<pos[i]<<" ";
            }
        cout<<endl;
   }

    return 0;
}

