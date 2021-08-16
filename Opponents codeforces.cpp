#include<iostream>
using namespace std;
int main()
{
    int n,d,r,c;
    int count=0,no=0;
    cin>>n>>d;
    char str1[d][n];
    for(r=0;r<d;r++)
    {
        for(c=0;c<n;c++)
        {
            cin>>str1[r][c];
        }
    }
    r=0;
       while(r<d)
       {
         no=0;
        for(c=0;c<n;c++)
        {
           if(str1[r][c]='0')
           {
               count++;
               goto p;
           }
           else if (str1[r][c]='1')
           {
               no++;
           }

        }

        if(no==n)
        {
            count=0;
        }
        p:
        r++;
       }

    cout<<final;

    return 0;
}
