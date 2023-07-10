#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
       lli n,m;
       cin>>n>>m;
       if(n%3!=0 && n!=1) cout<<"NO"<<endl;
       else
       {
           stack<int> st;
           st.push(n);
           int cnt=0;
           while(st.empty()==false && cnt==0)
           {
               int temp=st.top();
               st.pop();
               if(temp==m)
               {
                   cnt++;
                   break;
               }
               if(temp%3==0)
               {
                   int fir=temp/3;
                   int sec=2*fir;
                   st.push(fir); // 102 34 68
                   st.push(sec);
               }
           }
           if(cnt!=0)
           cout<<"YES"<<endl;
           else
            cout<<"NO"<<endl;
       }
    }
    return 0;
}
