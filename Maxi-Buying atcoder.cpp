
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int q=1.08*n;
    if(q>206)
    {
        cout<<":(";
    }
    if(q<206)
    {
        cout<<"Yay!";
    }
    if(q==206)
    {
        cout<<"so-so";
    }

    return 0;
}
