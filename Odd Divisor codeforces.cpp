#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        long long int n,temp=1,z=0;
        cin>>n;
        for (int i=1; i<=sqrt(n); i++)
        {
              if (n%i == 0)
              {
                if(n%2!=0)
                {
                    cout<<"YES"<<endl;
                    z++;
                    break;
                }
            }
            if(z==1)
                {
                    break;
                }
        }
        if(z==0)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

