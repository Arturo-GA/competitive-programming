#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> dp(n + 1, 0.0);
    
    
    dp[0] = 1.0;
    for (int i = 0; i < n; i++) {
        double p;
        cin >> p;
        for (int j = i + 1; j >= 0; j--) {
            dp[j] = dp[j] * (1 - p);
            if (j > 0) dp[j] = dp[j] + dp[j - 1] * p;
        }
    }
    double ans = 0.0;
    for (int j = n / 2 + 1; j <= n; j++) ans += dp[j];


    
    cout << fixed << setprecision(10) << ans << "\n";
    return 0;
}