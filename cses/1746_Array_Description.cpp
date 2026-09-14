#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    // dp[v] = número de arrays válidos hasta la posición actual terminando en valor v
    vector<long long> dp(m + 2, 0);

    // Inicializar primera posición
    if (x[0] == 0) {
        for (int v = 1; v <= m; v++) dp[v] = 1;
    } else {
        dp[x[0]] = 1;
    }

    for (int i = 1; i < n; i++) {
        vector<long long> ndp(m + 2, 0);
        // suma de transiciones: desde v-1, v, v+1
        for (int v = 1; v <= m; v++) {
            long long ways = (dp[v - 1] + dp[v] + dp[v + 1]) % MOD;
            if (x[i] == 0 || x[i] == v) {
                ndp[v] = ways;
            }
        }
        dp = ndp;
    }

    long long ans = 0;
    for (int v = 1; v <= m; v++) ans = (ans + dp[v]) % MOD;

    cout << ans << "\n";
    return 0;
}