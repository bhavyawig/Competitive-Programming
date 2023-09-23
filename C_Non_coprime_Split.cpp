#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
     lli l,r;
     cin>>l>>r;
     //cout<<l<<" "<<r;
     if(r<=3)
      cout<<"-1"<<endl;
     else{
        if(l%2==0) cout<<"2 "<<l-2<<endl;
        else if((l+1)%2==0 && (l+1)<=r && (l+1)!=2)
        cout<<"2 "<<l-1<<endl;
        else
        {
            int check=-1;
            for(int i=2;i*i<=r;i++)
            {
                if(r%i==0)
                {
                    check=i;
                    //cout<<i<<endl;
                    break;
                }
            }
            if(check==-1 || r-check==0) cout<<"-1"<<endl;
            else
            {
                cout<<check<<" "<<r-check<<endl;
            }
        }
     }

    }
    return 0;
}