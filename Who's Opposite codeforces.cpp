#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int a,b,c;
        cin>>a; cin>>b; cin>>c;
        int let=min(a,b);
        int letm=max(a,b);
        int diff=letm-let;
       // cout<<let<<letm<<diff;
        if(letm>=2*let)
        {
            //cout<<"a";
            if(c<=2*diff)
            {
               // cout<<"b";
                int try1=c+diff;
                int try2=c-diff;
                if(try1<=2*diff)
                {
                    cout<<try1<<endl;
                }
                else
                {
                    cout<<try2<<endl;
                }
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}

