#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<long long> dp(n+1, -1e18);  // -infinito = imposible
    dp[0] = 0;

    for(long long i = 1; i <= n; i++){
        if(i >= a && dp[i-a] != -1e18) dp[i] = max(dp[i], dp[i-a]+1);
        if(i >= b && dp[i-b] != -1e18) dp[i] = max(dp[i], dp[i-b]+1);
        if(i >= c && dp[i-c] != -1e18) dp[i] = max(dp[i], dp[i-c]+1);
    }

    cout << dp[n] << "\n";
    return 0;
}