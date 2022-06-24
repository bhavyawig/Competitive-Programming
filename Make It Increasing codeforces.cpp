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
       lli cnt=0;
       lli x=0;
       lli a[n];
       map<lli,lli> m;
       for(lli i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
       }
        if(n==1)
            cout<<0<<endl;
        else{
                lli nt=0,one=0;
                for(lli i=0;i<n;i++)
                {
                    if(a[i]==1)
                        one++;
                    if(i==1 && a[0]==1)
                        continue;
                    else if(a[i]==1 && i>=1)
                        nt++;
                }
                for(auto &itr:m)
                {
                    if(itr.second>=3)
                        nt++;
                    if(itr.first==2 && itr.second>=2 && one>=1){
                        nt++;
                       // cout<<"here"<<endl;}
                }
                }
                if(nt==0){
       for(lli i=n-1;i>0;i--)
       {
           if(a[i-1]>=a[i])
           {
               while(a[i-1]>=a[i]){
               a[i-1]=a[i-1]/2;
               cnt++;
               //cout<<i<<endl;
               }
           }
       }
       //for(lli i=0;i<n;i++)
        //cout<<a[i]<<" ";
       for(lli i=1;i<n;i++)
       {
           if(a[i-1]<a[i])
            continue;
           else
            x++;
       }
       //cout<<"cnt"<<cnt<<endl;
       if(x==0)
        cout<<cnt<<endl;
        else
            cout<<-1<<endl;
        }
        else
            cout<<-1<<endl;

        }
}

    return 0;
}

