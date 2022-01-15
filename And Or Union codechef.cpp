#include <bits/stdc++.h>
using namespace std;


int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
    int n;
    cin>>n;
    long long int  power=1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   long long int  ans = 0;
    for (int i = 0; i < 32; i++)
    {
        int k = 0;
        for (int j = 0; j < n; j++){
            if ( (arr[j]%2==1) ) k++;
                arr[j]/=2;


        }
         if(k>1)
         {
             ans=ans+power;
         }
         power=power*2;
    }
    cout<<ans<<endl;
    }
    return 0;
}
