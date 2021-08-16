#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    int mul,mul2;
    cin>>n;
    int ten=n/10;
    int ones=n%10;
    switch(ten)
    {
    case 0:
        mul=2;
        break;
    case 1:
        mul=7;
        break;
         case 2:
        mul=2;
        break;
         case 3:
        mul=3;
        break;
         case 4:
        mul=3;
        break;
         case 5:
        mul=4;
        break;
         case 6:
        mul=2;
        break;
         case 7:
        mul=5;
        break;
         case 8:
        mul=1;
        break;
         case 9:
        mul=2;
        break;
    }


    switch(ones)
    {
    case 0:
        mul2=2;
        break;
    case 1:
        mul2=7;
        break;
         case 2:
        mul2=2;
        break;
         case 3:
        mul2=3;
        break;
         case 4:
        mul2=3;
        break;
         case 5:
        mul2=4;
        break;
         case 6:
        mul2=2;
        break;
         case 7:
        mul2=5;
        break;
         case 8:
        mul2=1;
        break;
         case 9:
        mul2=2;
        break;
    }

    cout<<mul*mul2;
    return 0;
}
