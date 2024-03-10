#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,sum=0;
        cin>>n;
        vector<lli> a(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%3==0) cout<<"0"<<endl;
        else{
            lli are=0;
            for(int i=0;i<n;i++)
            {
                lli rem=sum-a[i];
                if(rem%3==0)
                {
                    are++;
                    break;
                }
            }
            if(are==1)
            {
                cout<<"1"<<endl;
            }
            else
            {
                lli fuc=sum%3;
                fuc=3-fuc;
                if(fuc<2) cout<<"1"<<endl;
                else
                cout<<"2"<<endl;
            }
        }
    }
}
