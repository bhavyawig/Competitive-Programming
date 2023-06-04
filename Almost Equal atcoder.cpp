#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool my_compare(string a, string b)
{
    if (a.compare(0, b.size(), b) == 0
        || b.compare(0, a.size(), a) == 0)

        return a.size() > b.size();
    else
   return a < b;
}

int main()
{
   lli n,m;
   cin>>n>>m;
   vector<string> vec;
   for(int i=0;i<n;i++)
   {
       string lo;
       cin>>lo;
       vec.push_back(lo);
   }
   sort(vec.begin(),vec.end(),my_compare);
   for(int i=0;i<n;i++)
    cout<<vec[i]<<endl;
    int no=0;
   for(int i=1;i<n;i++)
   {
       string temp1=vec[i-1];
       string  temp2=vec[i];
       int cnt=0;
       for(int j=0;j<m;j++)
       {
            if(cnt==0 && temp1[j]!=temp2[j])
           {
               cnt++;
             //  temp2[j]=temp1[j];
           }
           else if(cnt!=0 && temp1[j]!=temp2[j]) no++;
       }
      // vec[i-1]=temp1;
       //vec[i]=temp2;
   }
 //  set<string> s;
   //for(int i=0;i<n;i++)
    //s.insert(vec[i]);
    if(no==0) cout<<"yes"<<endl;
    else cout<<"no"<<endl;

    return 0;

}
