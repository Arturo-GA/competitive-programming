#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> h1(n), h2(n);
    for (int i = 0; i < n; i++) cin >> h1[i];
    for (int i = 0; i < n; i++) cin >> h2[i];

    long long best1 = 0, best2 = 0;
    long long ans = 0;





    for (int i = 0; i < n; i++) {
        long long dp1 = h1[i] + best2;
        long long dp2 = h2[i] + best1;

        ans = max(ans, max(dp1, dp2));
        best1 = max(best1, dp1);
        best2 = max(best2, dp2);
    }



    

    cout << ans << "\n";
    return 0;
}