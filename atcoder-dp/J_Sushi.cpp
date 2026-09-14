#include <bits/stdc++.h>
using namespace std;

double dp[301][301][301];

int main() {
    int N;
    cin >> N;
    int c1 = 0, c2 = 0, c3 = 0;
    for (int x = 0; x < N; x++) {
        int a;
        cin >> a;
        if (a == 1) c1++;
        else if (a == 2) c2++;
        else if (a == 3) c3++;
    }

    dp[0][0][0] = 0;

    for (int k = 0; k <= c3; k++) {
        for (int j = 0; j <= c2 + c3; j++) {
            for (int i = 0; i <= c1 + c2 + c3; i++) {
                if (i == 0 && j == 0 && k == 0) continue;

                double val = N;
                if (i > 0) val += i * dp[i - 1][j][k];
                if (j > 0) val += j * dp[i + 1][j - 1][k];
                if (k > 0) val += k * dp[i][j + 1][k - 1];
                dp[i][j][k] = val / (i + j + k);
            }
        }
    }

    printf("%.10f\n", dp[c1][c2][c3]);
    return 0;
}