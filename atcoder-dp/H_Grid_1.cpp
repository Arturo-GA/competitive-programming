#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> g(H);
    for (int i = 0; i < H; i++) cin >> g[i];

    const int MOD = 1000000007;
    vector<vector<int>> dp(H, vector<int>(W, 0));
    dp[0][0] = 1;



    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (g[i][j] == '#') { dp[i][j] = 0; continue; }
            if (i == 0 && j == 0) continue;
            int v = 0;
            if (i > 0) v = (v + dp[i-1][j]) % MOD;
            if (j > 0) v = (v + dp[i][j-1]) % MOD;
            dp[i][j] = v;
        }
    }

    

    cout << dp[H-1][W-1] << endl;
    return 0;
}