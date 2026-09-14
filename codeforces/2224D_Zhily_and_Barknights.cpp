#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long power(long long a, long long b, long long mod) {
    long long res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

long long modInv(long long a) {
    return power(a, MOD - 2, MOD);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<long long> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        long long ans = 0;
        
        // Para cada par (i, j) con i < j
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // Contar en cuántas permutaciones a[i]*b'[i] > a[j]*b'[j]
                long long count = 0;
                
                // Probar todas las asignaciones de elementos de b a posiciones i y j
                // Las otras posiciones no importan para esta comparación
                for (int bi = 0; bi < n; bi++) {
                    for (int bj = 0; bj < n; bj++) {
                        if (bi != bj) {
                            // b[bi] va a posición i, b[bj] va a posición j
                            if (a[i] * b[bi] > a[j] * b[bj]) {
                                // Hay (n-2)! formas de asignar el resto
                                count++;
                            }
                        }
                    }
                }
                
                // La probabilidad es count / (n * (n-1))
                // Ya que hay n * (n-1) formas de elegir dos elementos distintos
                // Y para cada una hay (n-2)! permutaciones del resto
                
                ans = (ans + count) % MOD;
            }
        }
        
        // Dividir por n! y multiplicar por n!
        // count / (n*(n-1)) porque hay n*(n-1) formas de elegir b[bi], b[bj]
        // y cada una aparece (n-2)! veces en el total de n! permutaciones
        
        long long denom = (long long)n * (n - 1) % MOD;
        ans = ans * modInv(denom) % MOD;
        
        cout << ans << "\n";
    }
    
    return 0;
}