#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long cnt[100001] = {};  // cnt[v] = cuántas veces aparece v
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        cnt[x]++;
    }
    // dp[i] = máximo puntos considerando valores 1..i
    long long dp[100001] = {};
    dp[1] = cnt[1] * 1;

    for(int i = 2; i <= 100000; i++){
        long long tomar  = dp[i-2] + (long long)cnt[i] * i;  // tomo i, salto i-1
        long long saltar = dp[i-1];                           // no tomo i
        dp[i] = max(tomar, saltar);
    }
    cout << dp[100000] << "\n";
    return 0;
}