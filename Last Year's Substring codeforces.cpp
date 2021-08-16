#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int j;
    for(j=0;j<t;j++)
    {
        int n,i,count=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<=4;i++)
        {
            if(s.substr(0, i) + s.substr(n - 4 + i, 4 - i) == "2020")
            {
                cout<<"yes"<<endl;
                 count++;
                 break;
            }
        }
        if(count==0){
              cout<<"no"<<endl;
        }


    }
    return 0;
}
