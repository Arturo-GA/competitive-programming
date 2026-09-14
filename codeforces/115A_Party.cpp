#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) cin >> p[i];

    vector<int> prof(n + 1, 0);  // profundidad de cada nodo (0 = no calculada)

    // DFS hacia arriba con memoización: profundidad de u = profundidad del jefe + 1
    function<int(int)> dfs = [&](int u) {
        if (prof[u] != 0) return prof[u];      // ya calculado
        if (p[u] == -1) return prof[u] = 1;    // es raíz
        return prof[u] = dfs(p[u]) + 1;        // sube al jefe
    };

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, dfs(i));
    }

    cout << ans << endl;
    return 0;
}