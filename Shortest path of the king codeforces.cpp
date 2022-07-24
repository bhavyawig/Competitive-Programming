#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   char start,endd;
   lli star,edd;
   cin>>start>>star;
   cin>>endd>>edd;
   lli cnt=0;
   vector<string> ans;
   while(start!=endd || star!=edd)
   {
       if(start<endd && star<edd)
       {
           start++;star++;
           ans.push_back("RU");
           cnt++;
       }
       else if(start<endd && star>edd)
       {
           start++;star--;
                      ans.push_back("RD");
                      cnt++;
       }
       else if(start>endd && star<edd)
       {
           start--;star++;
           ans.push_back("LU");
           cnt++;
       }
       else if(start>endd && star>edd)
       {
           start--;star--;
                      ans.push_back("LD");
                      cnt++;
       }
       else if(star==edd && start>endd)
       {
           start--;
           ans.push_back("L");
           cnt++;
       }
        else if(star==edd && start<endd)
       {
           start++;
           ans.push_back("R");
           cnt++;
       }
        else if(start==endd && star>edd)
       {
           star--;
           ans.push_back("D");
           cnt++;
       }
       else if(start==endd && star<edd)
       {
           star++;
           ans.push_back("U");
           cnt++;
       }

   }
   cout<<cnt<<endl;
   for(lli i=0;i<ans.size();i++)
    cout<<ans[i]<<endl;
    return 0;
}


