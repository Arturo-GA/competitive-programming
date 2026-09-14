#include <bits/stdc++.h>
using namespace std;

vector<int> adj[2005];

int dfs(int node) {
    int profundidad = 1;

    for (int hijo : adj[node]) {
        profundidad = max(profundidad, 1 + dfs(hijo));
    }

    return profundidad;
}

int main() {
    int n;
    cin >> n;

    vector<int> roots;

    for (int i = 1; i <= n; i++) {
        int p;
        cin >> p;

        if (p == -1) {
            roots.push_back(i);
        } else {
            adj[p].push_back(i);
        }
    }

    int ans = 0;

    for (int root : roots) {
        ans = max(ans, dfs(root));
    }

    cout << ans << endl;
}