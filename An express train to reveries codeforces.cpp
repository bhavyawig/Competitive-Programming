#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    lli a[n],b[n];
    for(lli i=0;i<n;i++)
        cin>>a[i];
    for(lli i=0;i<n;i++)
        cin>>b[i];
        map<lli,lli> m;
        lli ar[n+1]={0};
    for(lli i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            m[a[i]]++;
        }
        ar[a[i]]++;
        ar[b[i]]++;
    }
    vector<lli> vee;
    for(lli i=1;i<n+1;i++)
    {
        if(ar[i]==0)
        {
            vee.push_back(i);
        }
    }
    lli l=0;
    for(lli i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            cout<<a[i]<<" ";
        }
        else
        {
            if(m[a[i]]==0 && m[b[i]]>=1){
                cout<<a[i]<<" ";
                m[a[i]]++;}
            else if(m[a[i]]>=1 && m[b[i]]==0){
                cout<<b[i]<<" ";
                m[b[i]]++;}
            else if(m[a[i]]==0 && m[b[i]]==0)
            {
                if(ar[a[i]]<=ar[b[i]]){
                cout<<a[i]<<" ";
                m[a[i]]++;}
                else
                {
                    cout<<b[i]<<" ";
                    m[b[i]]++;
                }
            }
            else if(m[a[i]]>=1 && m[b[i]]>=1)
            {
                lli dekho=vee.size();
                if(dekho>=1){
                cout<<vee[l]<<" ";
                dekho--;
                l++;}
                else{
                        if(m[a[i]]<=m[b[i]]){
                    cout<<a[i]<<" ";
                    m[a[i]]++;}
                    else
                    {
                     cout<<b[i]<<" ";
                    m[b[i]]++;
                    }
                }
            }

        }
    }
    return 0;
}

