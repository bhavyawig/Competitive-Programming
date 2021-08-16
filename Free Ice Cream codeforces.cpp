#include<iostream>
#include<string>
using namespace std;
int main()
// bhaviiiiii
{
    int n;
    long long x;
    cin>>n>>x;
    int i,distress=0,happy=0;
    char p;
    long long q;
    for(i=0;i<n;i++)
    {
        cin>>p;
        cout<<" ";
        cin>>q;
        if(p=='+')
        {
            x=x+q;
        }
        else if(p=='-')
        {
            if(x>=q)
            {
                x=x-q;
                happy++;
            }
            else
            {
                distress++;
            }
        }
    }
    cout<<x<<" "<<distress;

   return 0;
}
