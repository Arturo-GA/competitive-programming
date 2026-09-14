#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        vector<int> ops;
        int flip = 0;
        for (int i = n; i >= 1; i--) {
            long long val = a[i];
            // si hubo cantidad impar de flips
            if (flip) {
                val = -val;
            }
            // si queda positivo
            if (val > 0) {
                ops.push_back(i);
                flip ^= 1;
            }
        }

        cout << ops.size() << '\n';

        for (int x : ops) {
            cout << x << ' ';
        }
        cout << '\n';
    }
}