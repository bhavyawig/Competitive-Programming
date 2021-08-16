#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a[4]={2,4,6,8};
    int val;
    cin>>val;
    int mid=a[2];
    if(val>=mid)
    {
        for(i=mid;i<4;i++)
          {
               if(i==val){cout<<"after mid";}
          }
    }
    else
     {
           for(i=0;i<mid;i++){
            if(i==val){cout<<"before mid";}
            }
     }
    return 0;
}
