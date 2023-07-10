#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli atMostK(lli arr[], lli n, lli k)
{

    // To store the result
    lli count = 0;

    // Left boundary of window
    lli left = 0;

    // Right boundary of window
    lli right = 0;

    // Map to keep track of number of distinct
    // elements in the current window
    unordered_map<lli,lli> map;
    // Loop to calculate the count
    while (right < n) {

        // Calculating the frequency of each
        // element in the current window
        if (map.find(arr[right])==map.end())
            map[arr[right]]=0;
        map[arr[right]]++;

        // Shrinking the window from left if the
        // count of distinct elements exceeds K
        while (map.size() > k) {
            map[arr[left]]= map[arr[left]] - 1;
            if (map[arr[left]] == 0)
                map.erase(arr[left]);
            left++;
        }

        // Adding the count of subarrays with at most
        // K distinct elements in the current window
        count += right - left + 1;
        right++;
    }
    return count;
}

// Function to return the count of subarrays
// with exactly K distinct elements
lli exactlyK(lli arr[], lli n, lli k)
{

    // Count of subarrays with exactly k distinct
    // elements is equal to the difference of the
    // count of subarrays with at most K distinct
    // elements and the count of subararys with
    // at most (K - 1) distinct elements
    return (atMostK(arr, n, k) - atMostK(arr, n, k - 1));
}
int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
     lli n,q,k;
     cin>>n>>k>>q;
     lli a[n];
     lli oops=0;
     for(int i=0;i<n;i++)
     {
       cin>>a[i];
       if(a[i]==0) oops++;
     }
        lli p=1;
     for(int i=0;i<n;i++)
     {
         if(a[i]<=q){
            a[i]=p;
            p++;
         }
         else
            a[i]=0;
     }
     //for(int i=0;i<n;i++) cout<<a[i]<<endl;
     lli ans=0;
     if(oops==0) k++;
     else k--;
     for(int i=k+1;i<=n;i++)
     {
        // cout<<i<<" "<<exactlyK(a,n,i)<<endl;
         ans+=exactlyK(a,n,i);
     }
     cout<<ans<<endl;

    }

    return 0;

}
