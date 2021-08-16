#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,wp,rem,rn=0,count=0,diff;
    cin>>i>>j>>k;
    int w;
    for(w=i;w<=j;w++)
    {
        wp=w;
        while(wp != 0) {
        rem = wp%10;
        rn = rn*10 + rem;
        wp /= 10;}

        if(diff<0)
        {
            diff=wp-w;
        }
        else{
            diff=w-wp;
        }
        if(diff%k==0)
        {
          count++;
        }
    }

    cout<<count;
    return 0;
}
