#include<bits/stdc++.h>

using namespace std;

vector<int> adj[200000 + 1];
vector<int> ind(200000 + 1, -1);
vector<int> lowlink(200000 + 1, -1);
vector<bool> onStack(200000 + 1, false);
stack<int> s;
int idx = 0;
vector<int> sccSize(200000 + 1, 0);
vector<int> sccID(200000 + 1, -1);
int sccCounter = 0;
vector<int> reachabilityCount(200000 + 1, 0);

void tarjan(int v) {
    ind[v] = lowlink[v] = idx++;
    s.push(v);
    onStack[v] = true;

    int next = adj[v][0];
    if (ind[next] == -1) {
        tarjan(next);
        lowlink[v] = min(lowlink[v], lowlink[next]);
    } else if (onStack[next]) {
        lowlink[v] = min(lowlink[v], ind[next]);
    }

    if (lowlink[v] == ind[v]) {
        int w;
        int size = 0;
        do {
            w = s.top();
            s.pop();
            onStack[w] = false;
            sccID[w] = sccCounter;
            size++;
        } while (w != v);
        sccSize[sccCounter] = size;
        sccCounter++;
    }
}

void calculateReachability(int v) {
    if (reachabilityCount[v] != 0) return;
    int scc = sccID[v];
    reachabilityCount[v] = sccSize[scc];
    int next = adj[v][0];
    if (sccID[next] != scc) {
        calculateReachability(next);
        reachabilityCount[v] += reachabilityCount[next];
    }
}

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        int a;
        cin >> a;
        adj[i].push_back(a);
    }

    for (int i = 1; i <= N; i++) {
        if (ind[i] == -1) {
            tarjan(i);
        }
    }

    for (int i = 1; i <= N; i++) {
        if (reachabilityCount[i] == 0) {
            calculateReachability(i);
        }
    }

    long long int ans=0;
    for (int i = 1; i <= N; i++) {
        ans+=reachabilityCount[i] ;
    }
    cout<<ans;
    return 0;
}
