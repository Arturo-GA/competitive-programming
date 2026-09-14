#include <bits/stdc++.h>
using namespace std;

long long stringToNumber(string s) {
    long long num = 0;
    for(int i = 0; i < s.length(); i++) {
        num = num * 10 + (s[i] - '0');
    }
    return num;
}

long long abs_diff(long long a, long long b) {
    if(a > b) return a - b;
    return b - a;
}

int main(){
    int t; cin >> t;
    while(t--) {
        long long a;
        int n;
        cin >> a >> n;
        
        vector<int> d(n);
        for(int i = 0; i < n; i++) {
            cin >> d[i];
        }
        
        long long respuesta = LLONG_MAX;
        string str_a = "";
        
        // Convertir a a string manualmente
        if(a == 0) {
            str_a = "0";
        } else {
            long long temp = a;
            while(temp > 0) {
                str_a = char('0' + (temp % 10)) + str_a;
                temp = temp / 10;
            }
        }
        
        int len = str_a.length();
        
        // Edge case: si a es 0
        if(a == 0) {
            respuesta = 0;
        } else {
            // Caso 1: Mismo numero de digitos, reemplazar para que b >= a
            string cand1 = str_a;
            bool valido1 = true;
            
            for(int i = 0; i < len; i++) {
                int digito_actual = str_a[i] - '0';
                int encontrado = -1;
                
                for(int j = 0; j < n; j++) {
                    if(d[j] >= digito_actual) {
                        encontrado = d[j];
                        break;
                    }
                }
                
                if(encontrado == -1) {
                    valido1 = false;
                    break;
                }
                cand1[i] = '0' + encontrado;
            }
            
            if(valido1) {
                long long b1 = stringToNumber(cand1);
                respuesta = abs_diff(respuesta, abs_diff(a, b1));
            }
            
            // Caso 2: Mismo numero de digitos, reemplazar para que b <= a
            string cand2 = str_a;
            bool valido2 = true;
            
            for(int i = 0; i < len; i++) {
                int digito_actual = str_a[i] - '0';
                int encontrado = -1;
                
                for(int j = n - 1; j >= 0; j--) {
                    if(d[j] <= digito_actual) {
                        encontrado = d[j];
                        break;
                    }
                }
                
                if(encontrado == -1) {
                    valido2 = false;
                    break;
                }
                cand2[i] = '0' + encontrado;
            }
            
            if(valido2) {
                long long b2 = stringToNumber(cand2);
                respuesta = abs_diff(respuesta, abs_diff(a, b2));
            }
            
            // Caso 3: Un digito menos, todos digitos mayores
            if(len > 1) {
                string cand3 = "";
                for(int i = 0; i < len - 1; i++) {
                    cand3 = cand3 + char('0' + d[n-1]);
                }
                long long b3 = stringToNumber(cand3);
                respuesta = abs_diff(respuesta, abs_diff(a, b3));
            }
            
            // Caso 4: Un digito mas, todos digitos menores
            string cand4 = "";
            int primer_digito = d[0];
            if(primer_digito == 0 && n > 1) {
                primer_digito = d[1];
            }
            
            cand4 = cand4 + char('0' + primer_digito);
            for(int i = 1; i <= len; i++) {
                cand4 = cand4 + char('0' + d[n-1]);
            }
            long long b4 = stringToNumber(cand4);
            respuesta = abs_diff(respuesta, abs_diff(a, b4));
            
            // Caso 5: Un digito mas, todos digitos mayores
            string cand5 = "";
            cand5 = cand5 + char('0' + d[0]);
            if(d[0] == 0 && n > 1) {
                cand5[0] = '0' + d[1];
            }
            for(int i = 1; i <= len; i++) {
                cand5 = cand5 + char('0' + d[n-1]);
            }
            long long b5 = stringToNumber(cand5);
            respuesta = abs_diff(respuesta, abs_diff(a, b5));
        }
        
        cout << respuesta << "\n";
    }
    return 0;
}