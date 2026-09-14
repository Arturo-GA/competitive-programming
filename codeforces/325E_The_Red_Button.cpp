#include <bits/stdc++.h>
using namespace std;

int n;

vector<int> nxt;
vector<int> vis;

void dfs(int x) {

    if (vis[x]) return;

    vis[x] = 1;

    int y = (x + n / 2) % n;

    int a = (2 * x) % n;
    int b = (2 * x + 1) % n;

    // si el "par" ya fue visitado,
    // usamos el camino contrario
    if (vis[y]) {

        int to = nxt[y];

        if (to == a)
            nxt[x] = b;
        else
            nxt[x] = a;

    } else {

        nxt[x] = a;

        dfs(a);

        // si y no apareció,
        // cambiamos de camino
        if (!vis[y]) {

            nxt[x] = b;

            dfs(b);
        }
    }

    dfs(nxt[x]);
}

int main() {

    cin >> n;

    if (n % 2 == 1) {
        cout << -1 << '\n';
        return 0;
    }

    nxt.assign(n, -1);
    vis.assign(n, 0);

    dfs(0);

    vector<int> ans;

    int cur = 0;

    do {
        ans.push_back(cur);
        cur = nxt[cur];
    }
    while (cur != 0);

    ans.push_back(0);

    // verificar que usamos todos
    if ((int)ans.size() != n + 1) {
        cout << -1 << '\n';
        return 0;
    }

    for (int x : ans)
        cout << x << " ";

    cout << '\n';
}