#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int CountLargeNumbers(int item, vector<int>& list) {
    int l=0;
    int r=list.size()-1;
    int mid = 0;
    while(l<r){
        mid = l + (r-l)/2;
        if(list[mid] > item){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    if(l==r && item > list[l]){
        return 0;
    }
    return list.size()-l;
}

// Helper function to delete the first occurrence of 'item' from the sorted 'list'
void DeleteItemFromSortedList(vector<int>& list, int item) {
    int index = lower_bound(list.begin(), list.end(), item) - list.begin();
    list.erase(list.begin() + index);
}

// Function to count the number of elements greater than each element in the input list 'list'
vector<int> CountLarge(vector<int>& list) {
    // Create a sorted copy of the input list
    vector<int> sortedList = list;
    sort(sortedList.begin(), sortedList.end());

    // For each element in the input list, count the number of elements greater than it
    for (int i = 0; i < list.size(); i++) {
        DeleteItemFromSortedList(sortedList, list[i]);
        list[i] = CountLargeNumbers(list[i], sortedList);
    }
    return list;
}

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
    {
        int n,q;
        cin>>n>>q;
       vector<int> a;
        for(int i=0;i<n;i++)
        {
            int j;
            cin>>j;
            a.push_back(j);
        }
       vector<int> left(n);
        vector<int> ans(n);
        set<int> St;
    for (int i = 0; i < n; i++) {

        St.insert(a[i]);
        auto it = St.upper_bound(a[i]);
        left[i]= distance(it, St.end());
    }
       // vector<int> res = CountLarge(a);
        for(int i=0;i<n;i++)
        {
            cout<<left[i]<<endl;;
        }
     /*  for(int i=0;i<n;i++)
        {
            int shuru=(left[i]*(left[i]-1))/2;
            int khatm=(res[i]*(res[i]-1))/2;
            int mid=left[i]*res[i];
            ans[i]=shuru+khatm+mid;
        }
        map<int,int> m;
        for(int i=1;i<n;i++)
            ans[i]+=ans[i-1];
        for(int i=0;i<n;i++)
        {
            m[ans[i]]=a[i];
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<q;i++)
        {
            lli k;
            cin>>k;
             vector<int>::iterator upper1;
        upper1 = upper_bound(ans.begin(), ans.end(), k);
        int val=ans[upper1 - ans.begin()];
        cout<<m[val]<<endl;
        }
        */



    }

    return 0;

}
