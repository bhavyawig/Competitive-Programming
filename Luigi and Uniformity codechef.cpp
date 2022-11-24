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
       int arr[n];
       set<int> s;
       for(int i=0;i<n;i++){
       cin>>arr[i];
       s.insert(arr[i]);}
       int cnt=0,ufoo=0;
       sort(arr,arr+n);
       int mini=arr[0];
       for(int i=1;i<n;i++)
       {
           if(arr[i]%mini==0 && arr[i]!=mini)
           {
               cnt++;
           }
           else if(arr[i]%mini!=0)
            ufoo++;
       }
       if(s.size()==1)
        cout<<"0"<<endl;
       else if(ufoo>=1)
        cout<<n<<endl;
       else
        cout<<cnt<<endl;
   }

    return 0;
}


