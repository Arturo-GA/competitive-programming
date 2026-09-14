#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        // Recolectar todos los pares (valor objetivo, costo) en un vector
        vector<pair<long long,int> > pares;

        for(int i = 0; i < n; i++){
            long long v = a[i];
            int ops = 0;
            bool paso_por_2 = false;
            while(true){
                pares.push_back(make_pair(v, ops));
                if(v == 2) paso_por_2 = true;
                if(v == 1) break;
                if(v % 2 == 0) v = v / 2;
                else v = v + 1;
                ops++;
            }
            // Desde 1 (impar) se puede subir a 2 con 1 paso mas.
            // Solo registrarlo si el camino no paso por 2 antes (evita doble conteo).
            if(!paso_por_2){
                pares.push_back(make_pair((long long)2, ops + 1));
            }
        }

        // Ordenar por valor objetivo para agrupar
        sort(pares.begin(), pares.end());

        // Un valor sirve solo si TODOS los n elementos lo alcanzan (aparece n veces)
        long long best = LLONG_MAX;
        int i = 0;
        int m = (int)pares.size();
        while(i < m){
            int j = i;
            long long suma = 0;
            int cnt = 0;
            while(j < m && pares[j].first == pares[i].first){
                suma += pares[j].second;
                cnt++;
                j++;
            }
            if(cnt == n && suma < best) best = suma;
            i = j;
        }

        cout << best << "\n";
    }
    return 0;
}
/*

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        bool perfecto =true;
        int numperf;
        vector<long long> x(n);
        for (int i = 0; i < n; i++){ 
            cin>>x[i];
            if(i==0) numperf=x[i];
            if(numperf != x[i]) perfecto=false;
        }
        sort(x.begin(),x.end());
        int a=n;
        if(perfecto == true)
        { 
            cout<< numperf<<"\n"; continue;
        }
        else if(perfecto == false) {

        }
        
        
    }
    return 0;
} */




