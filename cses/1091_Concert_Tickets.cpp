#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, m;
    cin >> n >> m;
    multiset<long long> tickets;
    for(long long i = 0; i < n; i++){
        long long h; cin >> h;
        tickets.insert(h);
    }
    for(long long i = 0; i < m; i++){
        long long t; cin >> t;
        // busca el ticket más caro que sea <= t
        // upper_bound(t) apunta al primer elemento > t
        // el anterior a ese es el mayor <= t
        auto it = tickets.upper_bound(t);
        if(it == tickets.begin()){
            // no hay ningún ticket <= t
            cout << -1 << "\n";
        } else {
            --it;  // retrocede al mayor <= t
            cout << *it << "\n";
            tickets.erase(it);  // elimina ese ticket
        }
    }
    return 0;
}



/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    vector<long long> x(a);
    vector<pair<long long,long long>> y(b);  // {valor, indice_original}

    for(long long i = 0; i < a; i++) cin >> x[i];
    for(long long i = 0; i < b; i++){
        cin >> y[i].first;
        y[i].second = i;  // guarda el indice original
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());  // ordena por valor (first)

    vector<long long> respuesta(b);  // guarda resultado en posicion original
    long long j = 0;

    for(long long i = 0; i < b; i++){
        while(j < a && x[j] < y[i].first)
            j++;
        if(j < a && x[j] >= y[i].first){
            respuesta[y[i].second] = x[j];  // guarda en posicion original
            j++;
        }
        else{
            respuesta[y[i].second] = -1;
        }
    }

    for(long long i = 0; i < b; i++)
        cout << respuesta[i] << "\n";

    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    vector<long long> x(a), y(b);

    for(long long i = 0; i < a; i++) cin >> x[i];
    for(long long i = 0; i < b; i++) cin >> y[i];

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    long long cuneta = 0;
    long long j = 0;

    for(long long i = 0; i < b; i++){
        // salta personas demasiado pequeñas
        while(j < b && y[j] < x[i] )
            j++;
        // si la persona actual encaja, asigna
        if(j < b && y[j] >= x[i]){
            cout<< y[j]<<"\n";
            j++;
        }
        else{
            cout<<"-1"<<"\n";
        }
    }

    return 0;
}

*/


