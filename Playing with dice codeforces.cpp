#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int win1=0,draw=0,win2=0,count=0,i;
    cin>>a>>b;
    if(a>b)
    {
        c=a;
        a=b;
        b=c;

        for(i=a;i>=1;i--)
        {
            win1++;
        }
         for(i=b;i<=6;i++)
        {
            win2++;
        }
        for(i=a+1;i<b;i++)
        {
            count++;
        }
        if(count==1)
        {
            draw++;
        }
        else if(count==2)
        {
            win1++;
            win2++;
        }
        else if(count==3)
        {
            win1++;
            win2++;
            draw++;
        }
        else if(count==4)
        {
            win1=win1+2;
            win2=win2+2;
        }

         cout<<win2;
        cout<<" ";
        cout<<draw;
        cout<<" ";
        cout<<win1;
    }
    else if(a<b)
        {


        for(i=a;i>=1;i--)
        {
            win1++;
        }
         for(i=b;i<=6;i++)
        {
            win2++;
        }
        for(i=a+1;i<b;i++)
        {
            count++;
        }
        if(count==1)
        {
            draw++;
        }
        else if(count==2)
        {
            win1++;
            win2++;
        }
        else if(count==3)
        {
            win1++;
            win2++;
            draw++;
        }
        else if(count==4)
        {
            win1=win1+2;
            win2=win2+2;
        }
    cout<<win1;
        cout<<" ";
        cout<<draw;
        cout<<" ";
        cout<<win2;


        }
        else if(a==b)
        {
            draw=6;
            win1=0;
            win2=0;
            cout<<win2;
        cout<<" ";
        cout<<draw;
        cout<<" ";
        cout<<win1;
    }

    return 0;
}
