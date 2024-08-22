#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs_find_root(long long int node, long long int parent, long long int depth,
                   const vector<vector<pair<long long int, long long int>>>& adj,
                   vector<long long int>& depths, long long int& farthest_node, long long int& max_depth) {
    
    depths[node] = depth; 
    
    if (depth > max_depth) {
        max_depth = depth;  
        farthest_node = node; 
    }
    
    for (size_t i = 0; i < adj[node].size(); ++i) {
        long long int neighbor = adj[node][i].first;
        long long int weight = adj[node][i].second;
        if (neighbor != parent) {  
            dfs_find_root(neighbor, node, depth + weight, adj, depths, farthest_node, max_depth);
        }
    }
}
void dfs(long long int node, int parent, long long current_sum, 
         const vector<vector<pair<long long int, long long int>>>& adj, vector<long long int>& all_leaf_sums) {
    bool is_leaf = true;
    for (auto it = adj[node].begin(); it != adj[node].end(); ++it) {
        int neighbor = it->first;
        int weight = it->second;
        if (neighbor != parent) {
            is_leaf = false;
            dfs(neighbor, node, current_sum + weight, adj, all_leaf_sums);
        }
    }
    if (is_leaf) {
        all_leaf_sums.push_back(current_sum);
    }
}

int main() {
    long long int N;
    cin >> N;

    vector<vector<pair<long long int, long long int>>> adj(N + 1);

    for (int i = 0; i < N - 1; i++) {
        long long int A, B, C;
        cin >> A >> B >> C;
        adj[A].emplace_back(B, C);
        adj[B].emplace_back(A, C);
    }
        vector<long long int> depths(N + 1, 0);               // Depth of each node
 long long int farthest_node = -1, max_depth = -1;
    dfs_find_root(1, -1, 0, adj, depths, farthest_node, max_depth);
   // cout<<farthest_node<<endl;
    vector<long long int> all_leaf_sums;
    dfs(farthest_node, -1, 0, adj, all_leaf_sums);
    long long int sum=0,len=all_leaf_sums.size();
    //cout<<len<<endl;
    if(len==1)
    cout<<all_leaf_sums[0];
    else if(len==2)
    cout<<all_leaf_sums[0]+all_leaf_sums[1];
    else{
   for(long long i=0;i<all_leaf_sums.size()-2;i++)
   {
    sum+=(2*all_leaf_sums[i]);
   }
   sum+=all_leaf_sums[len-1];
   sum+=all_leaf_sums[len-2];
   cout<<sum;
    }
    return 0;
}
