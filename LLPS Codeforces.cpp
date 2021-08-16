#include<iostream>
#include<string.h>
int main()
{
int n,i,count=0;
char s[11];
char max;
gets(s);
n=strlen(s);
max=s[0];
for(i=0;i<n;i++)
{
    if(max<s[i])
        max=s[i];

}
for(i=0;i<n;i++)
{
    if(s[i]==max)
    {
        count++;#include<iostream>
#include<string.h>
int main()
{
int n,i,count=0;
char s[11];
char max;
gets(s);
n=strlen(s);
max=s[0];
for(i=0;i<n;i++)
{
    if(max<s[i])
        max=s[i];

}
for(i=0;i<n;i++)
{
    if(s[i]==max)
    {
        count++;
    }
}
for(i=0;i<count;i++)
{
    std::cout<<max;
}
return 0;
}

    }
}
for(i=0;i<count;i++)
{
    std::cout<<max;
}
return 0;
}
