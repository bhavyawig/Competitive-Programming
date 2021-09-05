#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,z=0,count=0;
        cin>>n;
        int last=n%10;
        count=count+((last-1)*10);
        while(n!=0)
        {
            n=n/10;
            z++;
        }
        if(z==1)
        {
            count=count+1;
        }
        else if(z==2)
        {
            count=count+3;
        }
         else if(z==3)
        {
            count=count+6;
        }
         else if(z==4)
        {
            count=count+10;
        }
        cout<<count<<endl;
    }
    return 0;
}
