#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
int minimum_increments(vector<lli>& array) {
    int count0 = 0, count1 = 0, count2 = 0;

    for (int num : array) {
        if (num % 3 == 0)
            count0++;
        else if (num % 3 == 1)
            count1++;
        else
            count2++;
    }

    int remainder0 = count0 % 3;
    int remainder1 = count1 % 3;
    int remainder2 = count2 % 3;
    int l;
  if(remainder0>=remainder1) l=remainder0;
  else l=remainder1;
  if(l<remainder2)  l=remainder2;
 // int f=max(l,remainder2);
 int increments_needed = (l * 2 - (remainder0 + remainder1 + remainder2)) % 3;

    return increments_needed;
}

int main() {
    lli t;
    cin>>t;
    for(lli e=0;e<t;e++)
    {
        lli n;
        cin>>n;
      vector<lli> a;
        lli sum=0;
        for(lli i=0;i<n;i++)
        {
           lli u; cin>>u;
           a.push_back(u);
           // sum+=a[i];
        }
         int increments = minimum_increments(a);
   cout << increments << std::endl;
    }

    return 0;
}
