#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli q;
     cin>>q;
     lli first=INT_MAX,last=INT_MIN,check=0;
     string str="";
     for(int i=0;i<q;i++)
     {
         int temp; cin>>temp;
         if(first==INT_MAX) first=temp;
         if(str.length()==0){ str+='1'; last=temp;}
         else
         {
             if(temp>=last && check==0)
             {
                 str+='1'; last=temp;
                // cout<<"her1e"<<endl;
             }
             else if(temp<last && check==0 && temp<=first)
             {
                 check++;
                 str+='1';
                 last=temp;
                 //  cout<<"her2e"<<endl;
             }
             else if(temp>=last && temp<=first && check==1)
             {
                  str+='1';
                 last=temp;
               //    cout<<"h3ere"<<endl;
             }
            else
            {
                str+='0';
            }
         }
     }
     cout<<str<<endl;
    }

    return 0;

}
