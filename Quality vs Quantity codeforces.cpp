#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       vector<lli> a;
       for(lli i=0;i<n;i++)
       {
           lli samp;
           cin>>samp;
           a.push_back(samp);
       }
       sort(a.begin(),a.end());
       lli sumred=a[n-1];
       lli sumblue=a[0]+a[1];
       lli red=1;
       lli blue=2;
       lli strt=2,ed=n-2;
       lli x=0;
       if(n==3 || n==4)
       {
           if(sumred>sumblue && red<blue)
                cout<<"YES"<<endl;
           else
            cout<<"NO"<<endl;
       }
       else
       {
       while(strt<ed)
       {
           if(sumred>sumblue && red<blue){
            x++;
            strt=ed+10;
           }
            if(sumred<=sumblue)
            {
                red++;blue++;
                sumred+=a[ed];
                sumblue+=a[strt];
                strt++;ed--;
            }
       }
       if(sumred>sumblue && red<blue){
            x++;
           }
       if(x>0)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
       }
   }

    return 0;
}

