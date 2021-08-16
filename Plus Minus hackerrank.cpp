#include <bits/stdc++.h>
using namespace std;
int main()
{
    float pos=0,neg=0,zero=0;
    int n,i;
    cin>>n;
  int arr[n];
    float pos1,zero1,neg1;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else if(arr[i]==0)
        {
            zero++;
        }

    }
    pos1=pos/n;
    neg1=neg/n;
    zero1=zero/n;
    cout<<pos1<<endl;
    cout<<neg1<<endl;
    cout<<zero1<<endl;
    return 0;

}
