#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++){
        cin >> t[i];
        t[i]--;              // pasa de tiempo 1..n a índice 0..n-1
    }
    sort(t.begin(), t.end());







    // dp[i][j] = costo mínimo habiendo colocado i platos usando minutos 0..j-1
    vector<vector<int>> dp(n + 1, vector<int>(2 * n, INF));
    dp[0][0] = 0;

    for (int i = 0; i <= n; i++)
        for (int j = 0; j < 2 * n - 1; j++)
            if (dp[i][j] < INF){
                // opción A: usar el minuto j para el plato i
                if (i < n)
                    dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + abs(t[i] - j));
                // opción B: no usar el minuto j (dejarlo vacío)
                dp[i][j + 1] = min(dp[i][j + 1], dp[i][j]);
            }

    cout << dp[n][2 * n - 1] << "\n";
}






int main(){
    int q;
    cin >> q;
    for (int caso = 0; caso < q; caso++) solve();
}