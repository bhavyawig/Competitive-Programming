
#include<bits/stdc++.h>
#include <iomanip>

using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long double x,y;
        cin>>x;
        cin>>y;
        long double a=6-x-y;
        if(a>=0){
        cout<<a/6<<endl;}
        else{cout<<"0"<<endl;}
    }


    return 0;
}
