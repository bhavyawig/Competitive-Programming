
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    int i,count=0;
    for(i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int p;
        p=n;
         while(p!=0)
            {
            int r = p % 10;
            if(r !=0 && n%r == 0)count++;
            p/=10;
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}
