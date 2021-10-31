#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int test;
    cin>>test;
    for(int e=0;e<test;e++)
    {
        lli n;
        cin>>n;
        lli a[n],b[n],arr[n],k=0,p=0,z=0,last,first,w=0,dif,q=0;
        set <int> s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            dif=a[i]-b[i];
            if(dif<0)
            {
                z++;
            }
            else if(dif>=0)
            {
                arr[k]=i;
                k++;
                p=k;
                s.insert(dif);
            }
        }
        if(z>=1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(s.size()==1)
            {
                cout<<"YES"<<endl;
            }
            else if( s.size()==2)
            {
               for(int i=0;i<p;i++)
                {
                    if(a[i+1]==a[i])
                    {
                        continue;
                    }
                    else
                    {
                        w++;
                    }
                }
                }
                if(w>=1)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }

    return 0;
}
