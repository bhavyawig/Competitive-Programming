#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int main()
{
    int i,j,count=0,n;
    string a[100];
    string str[100];
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {

        if(a[i]==82)
        {
            for(j=count-1;j>=0;j--)
            {
                i=0;
                str[j]=a[i];
                i++;
            }
            a.erase(std::remove(i));
            i--;
        }
        else{
                j=i;
            str[j]=a[i];
            count++;
        }
    }
    for(i=0;i<n;i++)
    {
      if(str[i]==str[i+1])
      {
        str.erase(std::remove(i,i+1));
      }
    }
    puts(str);
    return 0;
}
