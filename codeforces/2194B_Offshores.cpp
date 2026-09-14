#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        vector<long long> a(n);
        long long S = 0;                       // suma de floor(a_i / x)
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            S += a[i] / x;
        }
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            // si el destino es el banco i:
            //   - mantiene a[i]
            //   - recibe (S - a[i]/x) transferencias de y rublos cada una
            long long candidato = a[i] + (S - a[i] / x) * y;
            ans = max(ans, candidato);
        }
        cout << ans << '\n';
    }
    return 0;
}