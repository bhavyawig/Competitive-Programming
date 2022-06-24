
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
       lli n;
       cin>>n;
       lli a[n];
       for(lli i=0;i<n;i++)
        cin>>a[i];
       string ans="";
       vector<lli> naya;
       naya.push_back(0);
       lli strt=0,ed=n-1;
       while(strt<ed)
       {
           if(a[strt]<a[ed])
           {
               if(a[strt]>naya[naya.size()-1])
               {
                   naya.push_back(a[strt]);
                   strt++;
                   ans+='L';
               }
               else if(a[ed]>naya[naya.size()-1])
               {
                   naya.push_back(a[ed]);
                   ed--;
                   ans+='R';
               }
               else
                break;
           }
           else if(a[strt]>a[ed])
           {
               if(a[ed]>naya[naya.size()-1])
               {
                   naya.push_back(a[ed]);
                   ed--;
                   ans+='R';
               }
               else if(a[strt]>naya[naya.size()-1])
               {
                   naya.push_back(a[strt]);
                   strt++;
                   ans+='L';
               }
               else
                break;
           }
       }
       if(strt==ed && a[strt]>naya[naya.size()-1])
           ans+='L';
       cout<<ans.length()<<endl;
       for(lli i=0;i<ans.length();i++)
        cout<<ans[i];
        cout<<endl;

    return 0;
}
