#include <bits/stdc++.h> 
using namespace std;
typedef long long int lli;


int maxBlocks(vector<int> &arr)
{
    int n = arr.size();
    int maxDistinct = 0;
    
    for (int startBlock = 0; startBlock < n; ++startBlock) {
        int visited=0;
        int currBlock = startBlock;
        while (arr[currBlock]!=-1)
        {
            visited++;
            int temp=arr[currBlock];
            arr[currBlock]=-1;
            currBlock=temp;
        }
        maxDistinct = max(maxDistinct, visited);
    }

    return maxDistinct;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<maxBlocks(arr)<<endl;
}