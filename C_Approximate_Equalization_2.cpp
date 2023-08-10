#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n;
    cin>>n;
    priority_queue<lli> maxi;
    priority_queue<lli, vector<lli> , greater<lli>> mini;
    for(lli i=0;i<n;i++)
    {
        lli a;
        cin>>a;
        maxi.push(a);
        mini.push(a);
    }
    lli x=0,sum=0;
   // cout<<mini.top();
    while(maxi.top()-mini.top()>=2)
    {
        lli l=maxi.top();
        lli s=mini.top();
        if((l-s)%2==0)
        {
            sum+=((l-s)/2);
            x=(l-s)/2;
        }
        else{
        sum+=((l-s-1)/2);
        x=(l-s-1)/2;}

        maxi.pop();
        mini.pop();
       // cout<<l<<" "<<s<<endl;
        maxi.push(l-x);
        mini.push(s+x);
    }
    cout<<sum<<endl;
   return 0;
}