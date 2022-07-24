#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   char a[8][8];
   lli white=0,BLACK=0;
   for(lli i=0;i<8;i++)
   {
       for(lli j=0;j<8;j++)
       {
           cin>>a[i][j];

           if(a[i][j]=='Q')
            white+=9;
            if(a[i][j]=='R')
            white+=5;
            if(a[i][j]=='B')
            white+=3;
            if(a[i][j]=='N')
            white+=3;
            if(a[i][j]=='P')
            white+=1;

             if(a[i][j]=='q')
            BLACK+=9;
            if(a[i][j]=='r')
            BLACK+=5;
            if(a[i][j]=='b')
            BLACK+=3;
            if(a[i][j]=='n')
            BLACK+=3;
            if(a[i][j]=='p')
            BLACK+=1;

       }
   }
   if(BLACK==white)
    cout<<"Draw";
    else if(white>BLACK)
        cout<<"White";
    else
        cout<<"Black";


    return 0;
}

