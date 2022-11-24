#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main() {
       lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
	    int n;
	    cin>>n;
	    lli a[n];
	    for(int i=0;i<n;i++)
            cin>>a[i];
            if(a[0]==a[n-1])
                cout<<"YES"<<endl;
            else{
                    int check=0;
        for(int i=0;i<n-1;i++)
        {
          if(a[0]==a[i] && a[i+1]==a[n-1])
                check++;
        }
        if(check>=1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
   }
	return 0;
}

