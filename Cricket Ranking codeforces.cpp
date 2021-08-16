#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int counta=0,countb=0;
        int r1,w1,c1;
        cin>>r1;cin>>w1;cin>>c1;
        int r2,w2,c2;
        cin>>r2;cin>>w2;cin>>c2;
        if(r1>r2)
        {
            counta++;
        }
        else
        {
            countb++;
        }
         if(w1>w2)
        {
            counta++;
        }
        else
        {
            countb++;
        }
         if(c1>c2)
        {
            counta++;
        }
        else
        {
            countb++;
        }
        if(counta>countb)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }

    }


    return 0;
}

