#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    long long b;
    cin >> a >> b;
    vector<long long> x(a);
    for(int i = 0; i < a; i++) cin >> x[i];

    map<long long, int> visto;  // solo cambia esta línea

    for(int i = 0; i < a; i++){
        long long necesito = b - x[i];
        if(visto.count(necesito)){
            cout << visto[necesito] << " " << i+1 << "\n";
            return 0;
        }
        visto[x[i]] = i+1;
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}