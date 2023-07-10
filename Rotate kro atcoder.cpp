#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n][n];
   for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<n;j++){
char f; cin>>f;
       a[i][j]=f-'0';
        }
   }
   lli b[n][n];
   for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                int new_i, new_j;
                if (i == 0) {
                    new_j = j+1;
                    new_i=i;
                    if(j+1==n)
                    {
                        new_j=n-1;
                        new_i=1;
                    }
                } else if (i == n - 1) {
                    new_j = j-1;
                    new_i=i;
                    if(j-1<0)
                    {
                        new_j=0;
                        new_i=n-2;
                    }
                } else if (j == 0) {
                    new_i = i - 1;
                    new_j=j;
                   if(new_i<0)
                   {
                       new_i=0;
                       new_j=1;
                   }
                } else {
                    new_i = i+1;
                    new_j=j;
                   if(new_i==n)
                   {
                       new_i=n-1;
                       new_j=n-2;
                   }
                }
                b[new_i][new_j] = a[i][j];
            } else {
                b[i][j] = a[i][j];
            }
        }
    }
     for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<n;j++){
        cout<<b[i][j];}
        cout<<endl;
   }
    return 0;

}
