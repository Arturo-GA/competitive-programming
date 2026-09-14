#include <bits/stdc++.h>
using namespace std;

int parent[205]; // 0..n-1 para empleados, n..n+m-1 para idiomas

int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) parent[a] = b;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    // empleados: 0..n-1, idiomas: n..n+m-1
    for (int i = 0; i < n + m; i++) parent[i] = i;
    
    bool alguienSabeAlgo = false;
    
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (k > 0) alguienSabeAlgo = true;
        for (int j = 0; j < k; j++) {
            int lang;
            cin >> lang;
            // une empleado i con el nodo del idioma (lang-1 + n)
            unite(i, n + lang - 1);
        }
    }
    
    // contar componentes distintos entre los empleados
    set<int> componentes;
    for (int i = 0; i < n; i++) {
        componentes.insert(find(i));
    }
    
    if (!alguienSabeAlgo) {
        cout << n << endl;
    } else {
        cout << componentes.size() - 1 << endl;
    }
    
    return 0;
}