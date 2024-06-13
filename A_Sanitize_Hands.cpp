#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    lli n,m;
    cin>>n>>m;
    lli a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    lli left=m,ind=n;
      for(int i=0;i<n;i++)
    {
        if(a[i]<=left)
        {
            left-=a[i];
          //  cout<<left<<" ";
            if(left==0)
            {
                ind=i+1;
                break;
            }
        }
        else
        {
            ind=i;
            break;
        }
    }
    cout<<ind;
    return 0;
}


