#include<iostream>
using namespace std;
int main()
{
    unsigned long long int n,i;
    long long int cnt=1,maxx=0;
    cin>>n;
    unsigned long long a[n];
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
 for(i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            if(cnt>maxx){
                maxx=cnt;
            }
            cnt=1;
        }
        else
        cnt++;
    }
    if(cnt>maxx)
        maxx=cnt;
cout<<maxx;


    return 0;
}
