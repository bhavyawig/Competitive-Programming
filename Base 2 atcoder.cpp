#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   char a[64];
   for(lli i=0;i<64;i++)
   {
       cin>>a[i];
   }
   string str;
   for(lli i=63;i>=0;i--)
      str+=a[i];


  unsigned long long int dec_value = 0;
  unsigned long long int  base = 1;

    for (lli i = 63; i >= 0; i--) {
        if (str[i] == '1'){
            dec_value += base;
        }
        base = base * 2;
    }
   cout << dec_value << endl;

    return 0;

}
