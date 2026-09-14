#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
int main(){
    long long dp[MAX], pref[MAX];
    int t, k;
    cin >> t >> k;
    dp[0] = 1;
    for(int i = 1; i < MAX; i++){
        dp[i] = dp[i-1];                          // caso: última flor es roja
        if(i >= k) dp[i] = (dp[i] + dp[i-k]) % MOD;  // caso: último grupo blanco
    }
    pref[0] = 0;
    for(int i = 1; i < MAX; i++)
        pref[i] = (pref[i-1] + dp[i]) % MOD;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << (pref[b] - pref[a-1] + MOD) % MOD << "\n";
    }
    return 0;
}