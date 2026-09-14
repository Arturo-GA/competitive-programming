#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long dpA = 0, dpB = 0, dpC = 0;
    for (int i = 0; i < n; i++) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long nA = a + max(dpB, dpC);
        long long nB = b + max(dpA, dpC);
        long long nC = c + max(dpA, dpB);
        dpA = nA; dpB = nB; dpC = nC;
    }
    cout << max({dpA, dpB, dpC}) << "\n";
    return 0;
}