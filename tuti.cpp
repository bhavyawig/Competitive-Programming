#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   string n,kro;
   cin>>n;
   char arr[n.length()];
   int start=-1;
   for(int i=0;i<n.length();i++)
   {
           start++;
           arr[start]=n[i];
   }
   for(int i=start;i>=0;i--)
   {
       kro+=arr[i];
   }
   if(n==kro)
   {
       cout<<"String is palindrome";
   }
   else
   {
       cout<<"String is not a palindrome";
   }
    return 0;
}


