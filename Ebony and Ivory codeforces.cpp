
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i=1,z=0;
    cin>>a;
    cin>>b;
    cin>>c;
    int p=a,q=b;
    if(a<=b){
    while(a<=c)
    {
        a=p*i;
        z=c-a;
        if(z%b==0 || a%c==0 || c%b==0)
        {
            cout<<"YES";
            exit(0);
        }
        i++;
    }
    cout<<"NO";
    }


    else
    {
while(b<=c)
    {
        b=q*i;
        z=c-b;
        if(z%a==0 || b%c==0 || c%a==0)
        {
            cout<<"YES";
            exit(0);
        }
        i++;
    }
    cout<<"NO";
    }

    return 0;
}
