#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> x(n);
    long long total = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        total += x[i];
    }

    // dp[i][j] = máxima ventaja (mi puntaje - puntaje del rival)
    // que puede obtener quien mueve, sobre el subarreglo de i a j
    vector<vector<long long>> dp(n, vector<long long>(n, 0));

    // base: un solo elemento, lo tomo y la ventaja es ese valor
    for (int i = 0; i < n; i++) dp[i][i] = x[i];

    // subarreglos cada vez más grandes 
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i + len - 1 < n; i++) {
            int j = i + len - 1;
            // tomo el de la izquierda: gano x[i], y el rival queda con dp[i+1][j]
            long long takeLeft  = x[i] - dp[i + 1][j];
            // tomo el de la derecha: gano x[j], y el rival queda con dp[i][j-1]
            long long takeRight = x[j] - dp[i][j - 1];
            dp[i][j] = max(takeLeft, takeRight);
        }
    }

    // dp[0][n-1] es la ventaja del primer jugador sobre el segundo.
    // total = score1 + score2  y  ventaja = score1 - score2
    // => score1 = (total + ventaja) / 2
    long long ans = (total + dp[0][n - 1]) / 2;
    cout << ans << "\n";
    return 0;
}