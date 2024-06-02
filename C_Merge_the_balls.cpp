#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

 
int main() {
    lli n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    stack<lli> s;
    for(int i=0;i<n;i++)
    {
        if(s.empty()==true || s.top()!=a[i])
        {
            s.push(a[i]);
        }
        else if(s.empty()==false && s.top()==a[i])
        {
            lli ans=s.top()+1;
            s.pop();
            while(s.empty()==false && s.top()==ans)
            {
                ans=s.top()+1;
                s.pop();
            }
            s.push(ans);
        }
    }
    cout<<s.size()<<endl;
    return 0;
}


