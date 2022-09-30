#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
void sortkro(string vec[], int n)
{
    for (int i=1 ;i<n; i++)
    {
        string temp = vec[i];

        // Insert s[j] at its correct position
        int j = i - 1;
        while (j >= 0 && temp.length() < vec[j].length())
        {
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = temp;
    }
}
int main()
{
   lli n,k;
   cin>>n>>k;
   string vec[n];
   for(int i=0;i<n;i++)
   {
        cin>>vec[i];
   }
   string pass;
   cin>>pass;
   int lo=pass.size();
   sortkro(vec,n);
   //cout<<lo<<endl;
   //reverse(vec.begin(),vec.end());
   // for(int i=0;i<n;i++)
  //  cout<<vec[i]<<" ";
   lli best=0,kro=0,worst=0;
   for(int i=0;i<n;i++)
   {
        if(vec[i].size()==lo && kro==0)
       {
          // cout<<i;
           kro++;
           best=i;
       }
       if(vec[i].size()==lo)
       {
           worst=i;
       }
   }
   lli crow=best/k;
   crow=5*crow;
   cout<<best+crow+1<<" ";
   lli fas=worst/k;
   fas=fas*5;
   cout<<fas+worst+1;


    return 0;
}

