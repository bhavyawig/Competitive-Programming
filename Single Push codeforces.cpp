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
            else
            {
                arr[k]=i;
                k++;
                p=k;
                s.insert(i);
            }
        }
        if(z>=1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(s.size()==1 || s.size()==2)
            {
                for(int i=0;i<=p;i++)
                {
                    if(q==0 && arr[i]!=0)
                    {
                        q++;
                        first=i;
                    }
                    else if(q>0 && arr[i]!=0)
                    {
                        last=i;
                    }
                }
                for(int i=first;i<last;i++)
                {
                    if(a[i]==a[i+1])
                    {
                        continue;
                    }
                    else
                    {
                        w++;
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
