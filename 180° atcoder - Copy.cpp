#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a;
    string s;
    cin>>s;
    a=s.size();
   string arr;
    for(i=0;i<a;i++)
    {
        arr[i]=s[a-1-i];
    }
     for(i=0;i<a;i++)
    {
        if(arr[i]='0')
        {
            arr[i]='0';
        }
        else if(arr[i]='1')
        {
            arr[i]='1';
        }
        else if(arr[i]='6')
        {
            arr[i]='9';
        }
        else if (arr[i]='8')
        {
            arr[i]='8';
        }
        else if(arr[i]='9')
        {
            arr[i]='6';
        }
    }
     for(i=0;i<a;i++)
    {
        cout<<a[i];
    }


    return 0;
}
