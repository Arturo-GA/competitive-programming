#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }





    
    vector<int> lis;

    for (int i = 0; i < n; i++) {

        int izquierda = 0;
        int derecha = lis.size() - 1;
        int pos = lis.size();

        // binary search manual
        while (izquierda <= derecha) {
            int medio = (izquierda + derecha) / 2;
            if (lis[medio] >= a[i]) {
                pos = medio;
                derecha = medio - 1;
            } else {
                izquierda = medio + 1;
            }
        }

        if (pos == lis.size()) {
            lis.push_back(a[i]);
        } else {
            lis[pos] = a[i];
        }
    }



    cout << lis.size() << "\n";
    return 0;
}