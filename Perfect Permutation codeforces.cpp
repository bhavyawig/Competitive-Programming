#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<"-1";
    }
    else{
        cout<<"2 1 ";
        int i;
        for(i=3;i<n;i++)
        {
            cout<<i+1<<" "<<i<<" ";
            i++;
        }
    }
    return 0;
}
