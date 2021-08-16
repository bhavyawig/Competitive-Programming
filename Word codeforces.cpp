
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,len,small=0,big=0;
    len=s.length();
    for(i=0;i<len;i++)
    {
        if(s[i]>=97  && s[i]<=122)
        {
            small++;
        }
        else{
            big++;
        }
    }
    if(small>=big)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
       cout<<s;

    }
    else
    {

         transform(s.begin(), s.end(), s.begin(), ::toupper);
         cout<<s;
    }
}
