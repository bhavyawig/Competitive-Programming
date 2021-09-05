#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n;
        long long int count=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int cha=a[0];
        int chb=b[0];
        for(int i=0;i<n;i++)
        {
           if(cha>a[i])
           {
               cha=a[i];
           }
           if(chb>b[i])
           {
               chb=b[i];
           }
        }
       // cout<<cha<<"aaaaaaaaaaaaaa"<<chb;
        for(int i=0;i<n;i++)
        {
            if(a[i]>cha && b[i]>chb)
            {
                int x=a[i]-cha;   int y=b[i]-chb;
                int q=min(x,y);
                count=count+q;
                if(q==x)
                {
                    count=count+(y-x);
                }
                else
                {
                    count=count+(x-y);
                }
            }
            else if(a[i]>cha && b[i]==chb)
            {
                count=count+(a[i]-cha);
               // cout<<"less"<<a[i]-cha<<endl;
            }
            else if(a[i]==cha && b[i]>chb)
            {
                count=count+(b[i]-chb);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}


