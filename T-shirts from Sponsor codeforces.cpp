#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli s,m,l,xxl,xl;
   cin>>s>>m>>l>>xl>>xxl;
   lli k;
   cin>>k;
   string a[k];
   for(lli i=0;i<k;i++)
   {
       cin>>a[i];
   }
   for(lli i=0;i<k;i++)
   {
       if(a[i]=="S")
       {
           if(s>=1)
           {
               s--;
               cout<<"S"<<endl;
           }
           else if(m>=1)
           {
               m--;
               cout<<"M"<<endl;
           }
           else if(l>=1)
           {
               l--;
               cout<<"L"<<endl;
           }
           else if(xl>=1)
           {
               xl--;
               cout<<"XL"<<endl;
           }
           else
           {
               xxl--;
               cout<<"XXL"<<endl;
           }
       }
       else if(a[i]=="L")
       {
           if(l>=1)
           {
               l--;
               cout<<"L"<<endl;
           }
           else if(xl>=1)
           {
               xl--;
               cout<<"XL"<<endl;
           }
           else if(m>=1)
           {
               m--;
               cout<<"M"<<endl;
           }
           else if(xxl>=1)
           {
               xxl--;
               cout<<"XXL"<<endl;
           }
          else
           {
               s--;
               cout<<"S"<<endl;
           }

       }
       else if(a[i]=="M")
       {
            if(m>=1)
           {
               m--;
               cout<<"M"<<endl;
           }
           else if(l>=1)
           {
               l--;
               cout<<"L"<<endl;
           }
           else if(s>=1)
           {
               s--;
               cout<<"S"<<endl;
           }
           else if(xl>=1)
           {
               xl--;
               cout<<"XL"<<endl;
           }
           else
           {
               xxl--;
               cout<<"XXL"<<endl;
           }
       }
       else if(a[i]=="XL")
       {
            if(xl>=1)
           {
               xl--;
               cout<<"XL"<<endl;
           }
           else if(xxl>=1)
           {
               xxl--;
               cout<<"XXL"<<endl;
           }
           else if(l>=1)
           {
               l--;
               cout<<"L"<<endl;
           }
           else if(m>=1)
           {
               m--;
               cout<<"M"<<endl;
           }
           else
           {
               s--;
               cout<<"S"<<endl;
           }
       }
       else if(a[i]=="XXL")
       {
           if(xxl>=1)
           {
               xxl--;
               cout<<"XXL"<<endl;
           }
           else if(xl>=1)
           {
               xl--;
               cout<<"XL"<<endl;
           }
            else if(l>=1)
           {
               l--;
               cout<<"L"<<endl;
           }
           else if(m>=1)
           {
               m--;
               cout<<"M"<<endl;
           }
           else
           {
               s--;
               cout<<"S"<<endl;
           }
       }
   }

    return 0;
}

