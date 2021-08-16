
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    int i;
    for(i=0;i<len;i++)
    {
        if(s[i]==1 && s[i+1]==4 && s[i+2]==4)
        {
            i=i+3;
        }
        else if(s[i]==1 && s[i+1]==4 ){
               i=i+2;
        }
        else if(s[i]==1)
        {
            i++;

        }
        else{
            cout<<"NO";
            exit(0);
        }
    }
    cout<<"YES";

    return 0;
}
