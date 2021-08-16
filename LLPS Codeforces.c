#include<iostream>
int main()
{
int n,i,count=0;
char s[11];
char max;
n=strlen(s);
for(i=0;i<n;i++)
{
    cin>>s[i];
}
max=s[0];
for(i=0;i<n;i++)
{
    if(max<s[i])
        max=s[i];
    count++;
}
for(i=0;i<=count;i++)
{
    cout<<max;
}
return 0;
}
