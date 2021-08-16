#include <bits/stdc++.h>
using namespace std;
int main()
{

char s[10];
int count=0,cnt1=0,i,b;
for(i=0;i<10;i++)
{
    cin>>s[i];
    if(s[i]=='o')
    {
        count++;
    }
    else if(s[i]=='?')
    {
        cnt1++;
    }

}

if(count==0  && cnt1>0)
{
    cout<<pow(cnt1,4);
}
else if(count==1 && cnt1>0)
{
    cout<<(pow(cnt1,3))*4;
}
else if(count==2 && cnt1>0)
{
    cout<<(pow(cnt1,2))*12;
}
else if(count==3 && cnt1>0)
{
    cout<<"1";
}
else if(count==4 && cnt1>=0)
{
    cout<<"256";
}
else
{
    cout<<"0";
}
return 0;
}
