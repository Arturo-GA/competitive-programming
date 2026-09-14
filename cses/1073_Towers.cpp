#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    multiset<long long> topes;  // topes de todas las torres activas

    for(int i = 0; i < n; i++){
        long long k;
        cin >> k;

        // busca la torre con el menor tope estrictamente mayor que k
        //multiset<long long>::iterator it = topes.upper_bound(k);
        auto it = topes.upper_bound(k);

        if(it == topes.end()){
            // ninguna torre tiene tope > k, crea una nueva
            topes.insert(k);
        } else {
            // usa esa torre: reemplaza su tope por k
            topes.erase(it);
            topes.insert(k);
        }
    }

    cout << topes.size() << "\n";
    return 0;
}