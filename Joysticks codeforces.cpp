#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,count=0;
    cin>>a1;cin>>a2;
    while(a1>0 && a2>0 )
    {
        if(a1>=a2)
        {
            a1=a1-2;
            a2=a2+1;
            count++;
            if(a1<0 || a2<0){
                count--;
            }
        }
        else{
            a1=a1+1;
            a2=a2-2;
            count++;
            if(a1<0 || a2<0){
                count--;
            }
        }
    }
    cout<<count;

    return 0;
}

