#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       string s;
       cin>>s;
      // lli k=-1;
       lli count=0;
       lli len=s.length();
      // set<lli> t;
      /* for(lli i=0;i<len;i++)
       {
           t.insert(s[i]);
       }
       if(t.size()==1 && len>1)
       {
           if(len%2==0)
            cout<<len/2<<endl;
           else
           cout<<(len/2)  +1<<endl;
       }
       else{
        */
           // bool ans=false;
       for(lli i=0;i<len-2;i++)
       {
          // ans=false;
           if(s[i]==s[i+1] && s[i+1]!='1')
           {
               s[i+1]='1';
         // cout<<"in 1 loop"<<endl;
           //    cout<<i+1<<endl;
              // ans=true;
               count++;

           }
           if(s[i]==s[i+2] && s[i+2]!='1')
           {
               s[i+2]='1';
               //cout<<"here"<<endl;
             //cout<<i+2<<endl;
              // ans=true;
               count++;
           }
//           if(ans==true){
//            count++;
//           }
       }
       /*for(lli i=0;i<len-1;i++)
       {
           if(s[i]==s[i+1])
           {
               s[i+1]=k;
               k--;
               count++;
               //cout<<"in 2 loop"<<endl;
               //cout<<i<<endl;
           }
       }*/
       if(s[len-1]==s[len-2] && s[len-1]!='1')
       {
           count++;
           //cout<<"idhar"<<endl;
           //cout<<s[len-1]<<" "<<s[len-2];
       }
       cout<<count<<endl;
   }

    return 0;
}

