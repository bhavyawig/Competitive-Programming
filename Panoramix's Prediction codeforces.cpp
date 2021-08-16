
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int i;
    for(i=n+1;i<=m;i++)
    {
        if(n==2 && m==3)
        {
            cout<<"YES";
            exit(0);
        }
        else if(n==3 && m==5)
        {
            cout<<"YES";
            exit(0);
        }
        else if(n==5 && m==7)
        {
            cout<<"YES";
            exit(0);
        }
        else if(n==7 && m==11)
        {
            cout<<"YES";
            exit(0);
        }
        else if(n==11 && m==13)
        {
            cout<<"YES";
            exit(0);
        }
        else if(i<=23)
        {
            if(i%2!=0 && i%3!=0  && i%5!=0  && i%7!=0  && i%11!=0)
            {
                cout<<"YES";
                exit(0);
            }
            else{
                cout<<"NO";
                exit(0);
            }
        }
        else if(i>23)
        {

            if(i%2!=0 && i%3!=0  && i%5!=0  && i%7!=0  && i%11!=0 && i%13!=0 && i%17!=0 && i%19!=0 && i%23!=0)
            {
                cout<<"YES";
                exit(0);
            }
            else{
                   cout<<"NO";
                exit(0);
            }
        }
        else
        {
            cout<<"NO";
            exit(0);
        }
    }

    return 0;
}
