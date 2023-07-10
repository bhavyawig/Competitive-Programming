#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   vector<string> vec;
   for(int i=0;i<n;i++)
   {
       string h;
       cin>>h;
       vec.push_back(h);
   }
   int check=0;
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           string fin="";
           fin+=vec[i]; fin+=vec[j];
           string temp=fin;
           reverse(temp.begin(),temp.end());
           if(temp==fin && check==0 && i!=j)
           {
               check++;
               cout<<"Yes"<<endl;
               break;
           }
           string fin1="";
           fin1+=vec[j]; fin1+=vec[i];
           string temp1=fin1;
           reverse(temp1.begin(),temp1.end());
           if(temp1==fin1 && check==0 && i!=j)
           {
               check++;
               cout<<"Yes"<<endl;
               break;
           }
       }
   }
   if(check==0) cout<<"No"<<endl;

    return 0;

}
