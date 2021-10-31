#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,s=0;
        cin>>n;
        vector<int> a(n);
        bool f;
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
        }
        while(!is_sorted(a.begin(), a.end())){
                f=true;
        for(lli i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
            {
              f=false;
              swap(a[i],a[i-1]);
            }
        }
        if(f==false)
        {
            s++;
        }
        }
        if(s!=0){
        cout<<s+1<<endl;}
        else
        {
            cout<<s<<endl;
        }
    }

    return 0;
}

