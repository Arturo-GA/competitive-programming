#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
int cats[100005];
int n, m;
int ans = 0;

void dfs(int node, int parent, int consecutiveCats) {

    // Si este nodo tiene gato
    if (cats[node] == 1) {
        consecutiveCats++;
    }
    else {
        consecutiveCats = 0;
    }
    // Si excede el límite
    if (consecutiveCats > m) {
        return;
    }
    bool isLeaf = true;
    for (int i = 0; i < adj[node].size(); i++) {
        int child = adj[node][i];
        // No regresar al padre
        if (child == parent) {
            continue;
        }
        isLeaf = false;
        dfs(child, node, consecutiveCats);
    }

    // Si es hoja válida
    if (isLeaf) {
        ans++;
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> cats[i];
    }
    // Leer aristas
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0, 0);
    cout << ans;
}