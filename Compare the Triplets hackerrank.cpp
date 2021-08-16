#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],b[3];
    int i;
    int counta=0,countb=0;
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<3;i++)
    {
        cin>>b[i];
    }

    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            counta++;
        }

        else if(b[i]>a[i]){
            countb++;
        }
    }
    cout<<counta<<"  "<<countb<<endl;
    return 0;
}
