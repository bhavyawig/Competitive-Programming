#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i;
    for(i=0;i<t;i++)
    {
        int ca,cb,mc,e,f;
        cin>>ca>>cb>>mc;
        if(mc>ca && mc>cb)
        {
            if(ca<cb)
            {
                cout<<"Cat B"<<endl;
            }
            else if(cb<ca)
            {
                cout<<"Cat A"<<endl;
            }
            else if(ca==cb)
            {
                cout<<"Mouse C"<<endl;
            }
        }
        else if((mc-ca)==(cb-mc) || (mc-cb)==(ca-mc))
        {
            cout<<"Mouse C"<<endl;
        }
        else if(mc<ca && mc<cb)
        {
            if(ca<cb)
            {
              cout<<"Cat A"<<endl;
            }
            else if(cb<ca)
            {
              cout<<"Cat B"<<endl;
            }
            else if(cb==ca)
            {
               cout<<"Mouse C"<<endl;
            }
        }
        else if(mc==ca && mc!=cb)
        {
            cout<<"Cat A"<<endl;
        }
        else if(mc!=ca && mc==cb)
        {
             cout<<"Cat B"<<endl;
        }
        else if(mc==ca && mc==cb)
        {
            cout<<"Mouse C"<<endl;
        }
        else{
            e=mc-ca;
            f=mc-cb;
            if(e<0)
            {
                e=(-e);
            }
            if(f<0)
            {
                f=(-f);
            }
            if(e>f)
            {
              cout<<"Cat B"<<endl;
            }
            else if(e<f)
            {
               cout<<"Cat A"<<endl;
            }
        }
    }
    return 0;

}
